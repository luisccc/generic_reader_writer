

module w_handler #(
    parameter type  w_channel_t = logic,
    parameter type  trans_data_t = logic
) (
    input   logic clk_i,
    input   logic rst_ni,

    // To the master Ax Channel
    output  logic           w_valid_o,
    output  w_channel_t     w_data_o,
    input   logic           w_ready_i,
    
    input   trans_data_t    trans_data_i,
    input   logic           enable_i,
    output  logic           ready_o
);

    enum logic [1:0] {
        IDLE,
        SETUP,
        OPERATION
    } state_q, state_d;

    trans_data_t    trans_data_q, trans_data_d;
    logic [7:0]     issued_trans_d, issued_trans_q;
    logic [7:0]     issued_data_d, issued_data_q;

    always_comb begin
        trans_data_d    = trans_data_q;
        issued_trans_d  = issued_trans_q;
        issued_data_d   = issued_data_q;

        w_valid_o = 1'b0;
        ready_o = 1'b0;

        case (state_q)
            // Start the transaction
            IDLE: begin
                ready_o = 1'b1;

                trans_data_d = trans_data_i;
                issued_trans_d = '0;
                issued_data_d  = '0;
            end
            SETUP: begin
                issued_trans_d = issued_trans_q + 1;
                issued_data_d  = '0;
            end
            OPERATION: begin
                if(w_ready_i)
                    issued_data_d = issued_data_q + 1;
                
                w_valid_o = 1'b1;
                w_data_o = '{default:'0};

                if (w_ready_i 
                    && issued_data_q == trans_data_q.len - 1) w_data_o.last = 1'b1;
                else w_data_o.last = 1'b0;

                w_data_o.data = issued_data_q;
                w_data_o.strb = '1;
            end
        endcase
    end

    always_comb begin
        state_d = state_q;

        case (state_q)
            IDLE: begin
                if (enable_i) state_d = OPERATION;
            end
            SETUP: begin
                if (issued_trans_q == trans_data_q.burst_len - 1) state_d = IDLE;
                else state_d = OPERATION;
            end
            OPERATION: begin
                if (w_ready_i 
                    && issued_data_q == trans_data_q.len - 1) state_d = SETUP;
            end
        endcase
    end

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if(~rst_ni) begin
            state_q     <= IDLE;
            trans_data_q <= '{default:0};

            issued_trans_q <= '0;
            issued_data_q  <= '0;
        end else begin
            state_q     <= state_d;
            trans_data_q <= trans_data_d;

            issued_trans_q <= issued_trans_d;
            issued_data_q  <= issued_data_d;
        end
    end

endmodule
