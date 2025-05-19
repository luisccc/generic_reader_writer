

module ax_handler #(
    parameter type  ax_channel_t = logic,
    parameter type  trans_data_t = logic,

    parameter logic RW = 0
) (
    input   logic clk_i,
    input   logic rst_ni,

    // To the master Ax Channel
    output  logic           ax_valid_o,
    output  ax_channel_t    ax_data_o,
    input   logic           ax_ready_i,
    
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
        trans_data_d = trans_data_q;
        issued_trans_d = issued_trans_q;

        ax_valid_o = 1'b0;
        ready_o = 1'b0;

        case (state_q)
            // Start the transaction
            IDLE: begin
                ready_o = 1'b1;

                trans_data_d = trans_data_i;
                issued_trans_d = '0;
            end
            OPERATION: begin
                if (ax_ready_i)
                    issued_trans_d = issued_trans_q + 1;

                ax_valid_o = 1'b1;
                ax_data_o = '{default: '0};
                
                ax_data_o.addr = trans_data_q.addr;
                ax_data_o.len  = trans_data_q.len;
                ax_data_o.size = 3;

                ax_data_o.burst = axi_pkg::BURST_INCR;
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
                if (ax_ready_i 
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
