#pragma once
#include "dut_base.hpp"
#include "xspcomm/xcomm.h"
using namespace xspcomm;

class UTCache: public DutUnifiedBase
{
public:
    /*

    */

    // Cache 
    XData clock;
    XData reset;
    XData io_in_req_ready;
    XData io_in_req_valid;
    XData io_in_req_bits_addr;
    XData io_in_req_bits_size;
    XData io_in_req_bits_cmd;
    XData io_in_req_bits_wmask;
    XData io_in_req_bits_wdata;
    XData io_in_req_bits_user;
    XData io_in_resp_ready;
    XData io_in_resp_valid;
    XData io_in_resp_bits_cmd;
    XData io_in_resp_bits_rdata;
    XData io_in_resp_bits_user;
    XData io_flush;
    XData io_out_mem_req_ready;
    XData io_out_mem_req_valid;
    XData io_out_mem_req_bits_addr;
    XData io_out_mem_req_bits_size;
    XData io_out_mem_req_bits_cmd;
    XData io_out_mem_req_bits_wmask;
    XData io_out_mem_req_bits_wdata;
    XData io_out_mem_resp_ready;
    XData io_out_mem_resp_valid;
    XData io_out_mem_resp_bits_cmd;
    XData io_out_mem_resp_bits_rdata;
    XData io_out_coh_req_ready;
    XData io_out_coh_req_valid;
    XData io_out_coh_req_bits_addr;
    XData io_out_coh_req_bits_size;
    XData io_out_coh_req_bits_cmd;
    XData io_out_coh_req_bits_wmask;
    XData io_out_coh_req_bits_wdata;
    XData io_out_coh_resp_ready;
    XData io_out_coh_resp_valid;
    XData io_out_coh_resp_bits_cmd;
    XData io_out_coh_resp_bits_rdata;
    XData io_mmio_req_ready;
    XData io_mmio_req_valid;
    XData io_mmio_req_bits_addr;
    XData io_mmio_req_bits_size;
    XData io_mmio_req_bits_cmd;
    XData io_mmio_req_bits_wmask;
    XData io_mmio_req_bits_wdata;
    XData io_mmio_resp_ready;
    XData io_mmio_resp_valid;
    XData io_mmio_resp_bits_cmd;
    XData io_mmio_resp_bits_rdata;
    XData io_empty;
    XData victim_way_mask_valid;
    XData victim_way_mask;


    // Ports for binding
    XPort port;

    // Clock for DUT timing
    XClock xclk;

    // Cache
    UTCache();
    UTCache(int argc, char **argv);
    UTCache(char *filename);
    UTCache(char *filename, int argc, char **argv);
    UTCache(std::initializer_list<const char *> args);
    ~UTCache();

    // Funtions for DUT
    void init();
    void initClock(XData &clk);
};
