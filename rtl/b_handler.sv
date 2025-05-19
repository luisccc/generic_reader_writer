

module b_handler #(
    parameter type  b_channel_t = logic,
    parameter type  trans_data_t = logic
) (
    input   logic clk_i,
    input   logic rst_ni,

    // To the master Ax Channel
    input   logic           b_valid_i,
    input   b_channel_t     b_data_i,
    output  logic           b_ready_o,
    
    input   trans_data_t    trans_data_i,
    input   logic           enable_i,
    output  logic           ready_o
);

    enum logic [0:0] {
        IDLE,
        OPERATION
    } state_q, state_d;

    trans_data_t    trans_data_q, trans_data_d;
    logic [7:0]     issued_trans_d, issued_trans_q;

    always_comb begin
        trans_data_d    = trans_data_q;
        issued_trans_d  = issued_trans_q;

        b_ready_o = 1'b0;
        ready_o = 1'b0;

        case (state_q)
            // Start the transaction
            IDLE: begin
                ready_o = 1'b1;

                trans_data_d = trans_data_i;
                issued_trans_d = '0;
            end
            OPERATION: begin
                if(b_valid_i) begin
                    issued_trans_d = issued_trans_q + 1;
                    b_ready_o = 1'b1;
                end
            end
        endcase
    end

    always_comb begin
        state_d = state_q;

        case (state_q)
            IDLE: begin
                if (enable_i) state_d = OPERATION;
            end
            OPERATION: begin
                if (b_valid_i 
                    && issued_trans_q == trans_data_q.burst_len - 1) state_d = IDLE;
            end
        endcase
    end

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if(~rst_ni) begin
            state_q     <= IDLE;
            trans_data_q <= '{default:0};

            issued_trans_q <= '0;
        end else begin
            state_q     <= state_d;
            trans_data_q <= trans_data_d;

            issued_trans_q <= issued_trans_d;
        end
    end

endmodule
