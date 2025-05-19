module dut #(

) (
    input logic clk_i,
    input logic rst_ni,

    // AXI Config Slave port
    input   logic               config_aw_valid_i,
    input   ariane_axi::addr_t  config_aw_addr_i,
    input   axi_pkg::len_t      config_aw_len_i,
    input   axi_pkg::size_t     config_aw_size_i,
    input   ariane_axi::id_t    config_aw_id_i,

    output  logic               config_aw_ready_o,
    
    input   logic               config_w_valid_i,
    input   ariane_axi::data_t  config_w_data_i,
    input   ariane_axi::strb_t  config_w_strb_i,
    input   logic               config_w_last_i,

    output  logic               config_w_ready_o,

    input   logic               config_ar_valid_i,
    input   ariane_axi::addr_t  config_ar_addr_i,
    input   axi_pkg::len_t      config_ar_len_i,
    input   axi_pkg::size_t     config_ar_size_i,
    input   ariane_axi::id_t    config_ar_id_i,
    
    output  logic               config_ar_ready_o,

    output  logic               config_r_valid_o,
    output  ariane_axi::data_t  config_r_data_o,
    output  axi_pkg::resp_t     config_r_resp_o,
    output  logic               config_r_last_o,
    output  ariane_axi::id_t    config_r_id_o,

    input  logic                config_r_ready_i,

    output  logic               config_b_valid_o,
    output  axi_pkg::resp_t     config_b_resp_o,
    output  ariane_axi::id_t    config_b_id_o,

    input   logic               config_b_ready_i,

    // AXI Bus Master port
    output  logic               mst_aw_valid_o,
    output  ariane_axi::addr_t  mst_aw_addr_o,
    output  axi_pkg::len_t      mst_aw_len_o,
    output  axi_pkg::size_t     mst_aw_size_o,
    output  logic [3:0]         mst_aw_wid_o,
    output  ariane_axi::id_t    mst_aw_id_o,

    input   logic               mst_aw_ready_i,
    
    output  logic               mst_w_valid_o,
    output  ariane_axi::data_t  mst_w_data_o,
    output  ariane_axi::strb_t  mst_w_strb_o,
    output  logic               mst_w_last_o,

    input   logic               mst_w_ready_i,

    output  logic               mst_ar_valid_o,
    output  ariane_axi::addr_t  mst_ar_addr_o,
    output  axi_pkg::len_t      mst_ar_len_o,
    output  axi_pkg::size_t     mst_ar_size_o,
    output  logic [3:0]         mst_ar_wid_o,
    output  ariane_axi::id_t    mst_ar_id_o,
    
    input   logic               mst_ar_ready_i,

    input   logic               mst_r_valid_i,
    input   ariane_axi::data_t  mst_r_data_i,
    input   axi_pkg::resp_t     mst_r_resp_i,
    input   logic               mst_r_last_i,
    input   ariane_axi::id_t    mst_r_id_i,

    output  logic               mst_r_ready_o,

    input   logic               mst_b_valid_i,
    input   axi_pkg::resp_t     mst_b_resp_i,
    input   ariane_axi::id_t    mst_b_id_i,

    output  logic               mst_b_ready_o
);

    ariane_axi::resp_t  config_rsp;
    ariane_axi::req_t   config_req;

    ariane_axi::resp_t      mst_rsp;
    ariane_axi::req_nsaid_t mst_req;

    always_comb begin
        // config_rsp = '{default:0};
        config_w_ready_o = config_rsp.w_ready;
        config_aw_ready_o = config_rsp.aw_ready;
        config_ar_ready_o = config_rsp.ar_ready;

        config_r_valid_o  = config_rsp.r_valid;
        config_r_data_o   = config_rsp.r.data;
        config_r_resp_o   = config_rsp.r.resp;
        config_r_last_o   = config_rsp.r.last;
        
        config_b_valid_o  = config_rsp.b_valid;
        config_b_resp_o   = config_rsp.b.resp;
        config_b_id_o     = config_rsp.b.id;

        config_req = '{default:0};
        config_req.aw_valid = config_aw_valid_i;
        config_req.aw.addr  = config_aw_addr_i;
        config_req.aw.len   = config_aw_len_i;
        config_req.aw.size  = config_aw_size_i;

        config_req.w_valid  = config_w_valid_i;
        config_req.w.data   = config_w_data_i;
        config_req.w.strb   = config_w_strb_i;
        config_req.w.last   = config_w_last_i;
        
        config_req.ar_valid = config_ar_valid_i;
        config_req.ar.addr  = config_ar_addr_i;
        config_req.ar.len   = config_ar_len_i;
        config_req.ar.size  = config_ar_size_i;
        
        config_req.b_ready  = config_b_ready_i;
        config_req.r_ready  = config_r_ready_i;
    end

    always_comb begin
        mst_rsp = '{default:0};
        mst_rsp.w_ready     = mst_w_ready_i ;
        mst_rsp.aw_ready    = mst_aw_ready_i;
        mst_rsp.ar_ready    = mst_ar_ready_i;

        mst_rsp.r_valid = mst_r_valid_i;
        mst_rsp.r.data  = mst_r_data_i;
        mst_rsp.r.resp  = mst_r_resp_i;
        mst_rsp.r.last  = mst_r_last_i;
        mst_rsp.r.id    = mst_r_id_i   ;
        
        mst_rsp.b_valid = mst_b_valid_i;
        mst_rsp.b.resp  = mst_b_resp_i ;
        mst_rsp.b.id    = mst_b_id_i   ;

        // slv_req = '{default:0};
        mst_aw_valid_o  = mst_req.aw_valid;
        mst_aw_addr_o   = mst_req.aw.addr ;
        mst_aw_len_o    = mst_req.aw.len  ;
        mst_aw_size_o   = mst_req.aw.size ;
        mst_aw_wid_o    = '0; //mst_req.aw.wid  ;
        mst_aw_id_o     = mst_req.aw.id   ;

        mst_w_valid_o   = mst_req.w_valid;
        mst_w_data_o    = mst_req.w.data ;
        mst_w_strb_o    = mst_req.w.strb ;
        mst_w_last_o    = mst_req.w.last ;
        
        mst_ar_valid_o  = mst_req.ar_valid;
        mst_ar_addr_o   = mst_req.ar.addr ;
        mst_ar_len_o    = mst_req.ar.len  ;
        mst_ar_size_o   = mst_req.ar.size ;
        mst_ar_wid_o    = '0;
        mst_ar_id_o     = mst_req.ar.id   ;
        
        mst_b_ready_o   = mst_req.b_ready;
        mst_r_ready_o   = mst_req.r_ready;
    end
    
    generic_reader_writer_top #(
        .DATA_WIDTH     (ariane_axi::DataWidth),
        .ADDR_WIDTH     (ariane_axi::AddrWidth),
        .USER_WIDTH     (ariane_axi::UserWidth),
        .ID_WIDTH       (ariane_axi::IdWidth),
        .ID_SLV_WIDTH   (ariane_axi::IdWidth),

        .axi_req_t  (ariane_axi::req_nsaid_t),
        .axi_rsp_t  (ariane_axi::resp_t),

        .axi_req_slv_t (ariane_axi::req_t),
        .axi_rsp_slv_t (ariane_axi::resp_t),

        // AXI channel structs
        .axi_aw_chan_t  (ariane_axi::aw_nsaid_chan_t),
        .axi_w_chan_t   (ariane_axi::w_chan_t),
        .axi_b_chan_t   (ariane_axi::b_chan_t),
        .axi_ar_chan_t  (ariane_axi::ar_nsaid_chan_t),
        .axi_r_chan_t   (ariane_axi::r_chan_t)
    ) i_generic_reader_writer_top (
        .clk_i,
        .rst_ni,

        .control_req_i  (config_req),
        .control_rsp_o  (config_rsp),

        .mst_req_o      (mst_req),
        .mst_rsp_i      (mst_rsp)
    );

endmodule