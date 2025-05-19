`include "register_interface/assign.svh"
`include "register_interface/typedef.svh"

module generic_reader_writer_top #(
    // AXI specific parameters
    // width of data bus in bits
    parameter int unsigned DATA_WIDTH     = 64,
    // width of addr bus in bits
    parameter int unsigned ADDR_WIDTH     = 64,
    // width of axuser signal
    parameter int unsigned USER_WIDTH     = 2,
    // width of id signal
    parameter int unsigned ID_WIDTH       = 8,
    // width of id signal
    parameter int unsigned ID_SLV_WIDTH   = 8,
    // AXI request/response
    parameter type         axi_req_t      = logic,
    parameter type         axi_rsp_t      = logic,

    // AXI request/response
    parameter type         axi_req_slv_t   = logic,
    parameter type         axi_rsp_slv_t   = logic,

    // AXI channel structs
    parameter type         axi_aw_chan_t  = logic,
    parameter type         axi_w_chan_t   = logic,
    parameter type         axi_b_chan_t   = logic,
    parameter type         axi_ar_chan_t  = logic,
    parameter type         axi_r_chan_t   = logic
) (
    input   logic clk_i,
    input   logic rst_ni,

    // // AXI Config Slave port
    input  axi_req_slv_t    control_req_i,
    output axi_rsp_slv_t    control_rsp_o,

    output  axi_req_t       mst_req_o,
    input   axi_rsp_t       mst_rsp_i
);

    typedef struct packed {
        logic [7:0]     burst_len, len;
        logic [3:0]     nsaid;
        logic [63:0]    addr;
    } trans_data_t;

    `REG_BUS_TYPEDEF_ALL(cfg_reg, logic[5:0], logic[31:0], logic[3:0])

    cfg_reg_req_t reg_req;
    cfg_reg_rsp_t reg_rsp;

    generic_reader_writer_reg_pkg::generic_reader_writer_reg2hw_t reg2hw;
    generic_reader_writer_reg_pkg::generic_reader_writer_hw2reg_t hw2reg;

    logic enable_r_pulse, enable_r_prev_state_q, enable_w_pulse, enable_w_prev_state_q;
    logic w_ready, aw_ready, b_ready;
    trans_data_t read_channel, write_channel;

    generic_reader_writer_prog_if #(
        // width of data bus in bits
        .DATA_WIDTH (DATA_WIDTH),
        // width of addr bus in bits
        .ADDR_WIDTH (ADDR_WIDTH),
        // width of id signal
        .ID_WIDTH   (ID_SLV_WIDTH),
        // width of user signal
        .USER_WIDTH (USER_WIDTH),

        .reg_req_t  (cfg_reg_req_t),
        .reg_rsp_t  (cfg_reg_rsp_t),

        .axi_req_t  (axi_req_slv_t),
        .axi_rsp_t  (axi_rsp_slv_t)
    ) i_generic_reader_writer_prog_if (
        .clk_i,
        .rst_ni,

        // slave port
        .slv_req_i  (control_req_i),
        .slv_rsp_o  (control_rsp_o),

        .cfg_req_o  (reg_req),
        .cfg_rsp_i  (reg_rsp)
    );

    generic_reader_writer_reg_top #(
        .reg_req_t  (cfg_reg_req_t),
        .reg_rsp_t  (cfg_reg_rsp_t)
    ) i_regmap (
        .clk_i,
        .rst_ni,
        .reg_req_i  (reg_req),
        .reg_rsp_o  (reg_rsp),

        // To HW
        .reg2hw, // Write
        .hw2reg, // Read

        // Config
        .devmode_i ('0) // If 1, explicit error return for unmapped register access
    );

    // Pulse Generator
    assign enable_r_pulse = reg2hw.control.r_enable & ~enable_r_prev_state_q;
    assign enable_w_pulse = reg2hw.control.w_enable & ~enable_w_prev_state_q;

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if(~rst_ni) begin
            enable_r_prev_state_q <= '0;
            enable_w_prev_state_q <= '0;
        end else begin
            enable_r_prev_state_q <= reg2hw.control.r_enable;
            enable_w_prev_state_q <= reg2hw.control.w_enable;
        end
    end

    assign hw2reg.control.r_ready.de = 1'b1;
    assign hw2reg.control.w_ready.de = 1'b1;
    assign hw2reg.control.w_ready.d = aw_ready & b_ready & w_ready;

    assign read_channel.burst_len = reg2hw.control.r_burst_len;
    assign read_channel.len       = reg2hw.ar_cfg.len;
    assign read_channel.nsaid     = reg2hw.ar_cfg.nsaid;
    assign read_channel.addr      = {reg2hw.ar_addrh, reg2hw.ar_addrl};

    ax_handler #(
        .ax_channel_t (axi_ar_chan_t),
        .trans_data_t (trans_data_t)
    ) i_ar_handler (
        .clk_i,
        .rst_ni,

        // To the master Ax Channel
        .ax_valid_o (mst_req_o.ar_valid),
        .ax_data_o  (mst_req_o.ar),
        .ax_ready_i (mst_rsp_i.ar_ready),
        
        .trans_data_i   (read_channel),
        .enable_i       (enable_r_pulse),
        .ready_o        (hw2reg.control.r_ready.d)
    );

    assign write_channel.burst_len = reg2hw.control.w_burst_len;
    assign write_channel.len       = reg2hw.aw_cfg.len;
    assign write_channel.nsaid     = reg2hw.aw_cfg.nsaid;
    assign write_channel.addr      = {reg2hw.aw_addrh, reg2hw.aw_addrl};
    
    ax_handler #(
        .ax_channel_t (axi_aw_chan_t),
        .trans_data_t (trans_data_t)
    ) i_aw_handler (
        .clk_i,
        .rst_ni,

        // To the master Ax Channel
        .ax_valid_o (mst_req_o.aw_valid),
        .ax_data_o  (mst_req_o.aw),
        .ax_ready_i (mst_rsp_i.aw_ready),
        
        .trans_data_i   (write_channel),
        .enable_i       (enable_w_pulse),
        .ready_o        (aw_ready)
    );

    w_handler #(
        .w_channel_t (axi_w_chan_t),
        .trans_data_t(trans_data_t)
    ) i_w_handler (
        .clk_i,
        .rst_ni,

        // To the master Ax Channel
        .w_valid_o  (mst_req_o.w_valid),
        .w_data_o   (mst_req_o.w),
        .w_ready_i  (mst_rsp_i.w_ready),
        
        .trans_data_i   (write_channel),
        .enable_i       (enable_w_pulse),
        .ready_o        (w_ready)
    );

    b_handler #(
        .b_channel_t    (axi_b_chan_t),
        .trans_data_t   (trans_data_t)
    ) i_b_handler (
        .clk_i,
        .rst_ni,

        // To the master Ax Channel
        .b_valid_i  (mst_rsp_i.b_valid),
        .b_data_i   (mst_rsp_i.b),
        .b_ready_o  (mst_req_o.b_ready),
        
        .trans_data_i   (write_channel),
        .enable_i       (enable_w_pulse),
        .ready_o        (b_ready)
    );

    assign mst_req_o.r_ready = 1'b1;

endmodule