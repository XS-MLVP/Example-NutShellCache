#include "UT_Cache.hpp"
#include "UT_Cache_dpi.hpp"

UTCache::UTCache() : DutUnifiedBase() {
    this->init();
};

UTCache::UTCache(int argc, char **argv) : DutUnifiedBase(argc, argv) {
    this->init();
};

UTCache::UTCache(char *filename) : DutUnifiedBase(filename) {
    this->init();
};

UTCache::UTCache(char *filename, int argc, char **argv) : DutUnifiedBase(filename, argc, argv) {
    this->init();
};

UTCache::UTCache(std::initializer_list<const char *> args) : DutUnifiedBase(args){
    this->init();
}



UTCache::~UTCache()
{
    // finalize Cache
}

void UTCache::init()
{
    /*

    */

    // initialize Cache
    this->clock.ReInit(0, IOType::Input, "clock");
    this->reset.ReInit(0, IOType::Input, "reset");
    this->io_in_req_ready.ReInit(0, IOType::Output, "io_in_req_ready");
    this->io_in_req_valid.ReInit(0, IOType::Input, "io_in_req_valid");
    this->io_in_req_bits_addr.ReInit(32, IOType::Input, "io_in_req_bits_addr");
    this->io_in_req_bits_size.ReInit(3, IOType::Input, "io_in_req_bits_size");
    this->io_in_req_bits_cmd.ReInit(4, IOType::Input, "io_in_req_bits_cmd");
    this->io_in_req_bits_wmask.ReInit(8, IOType::Input, "io_in_req_bits_wmask");
    this->io_in_req_bits_wdata.ReInit(64, IOType::Input, "io_in_req_bits_wdata");
    this->io_in_req_bits_user.ReInit(16, IOType::Input, "io_in_req_bits_user");
    this->io_in_resp_ready.ReInit(0, IOType::Input, "io_in_resp_ready");
    this->io_in_resp_valid.ReInit(0, IOType::Output, "io_in_resp_valid");
    this->io_in_resp_bits_cmd.ReInit(4, IOType::Output, "io_in_resp_bits_cmd");
    this->io_in_resp_bits_rdata.ReInit(64, IOType::Output, "io_in_resp_bits_rdata");
    this->io_in_resp_bits_user.ReInit(16, IOType::Output, "io_in_resp_bits_user");
    this->io_flush.ReInit(2, IOType::Input, "io_flush");
    this->io_out_mem_req_ready.ReInit(0, IOType::Input, "io_out_mem_req_ready");
    this->io_out_mem_req_valid.ReInit(0, IOType::Output, "io_out_mem_req_valid");
    this->io_out_mem_req_bits_addr.ReInit(32, IOType::Output, "io_out_mem_req_bits_addr");
    this->io_out_mem_req_bits_size.ReInit(3, IOType::Output, "io_out_mem_req_bits_size");
    this->io_out_mem_req_bits_cmd.ReInit(4, IOType::Output, "io_out_mem_req_bits_cmd");
    this->io_out_mem_req_bits_wmask.ReInit(8, IOType::Output, "io_out_mem_req_bits_wmask");
    this->io_out_mem_req_bits_wdata.ReInit(64, IOType::Output, "io_out_mem_req_bits_wdata");
    this->io_out_mem_resp_ready.ReInit(0, IOType::Output, "io_out_mem_resp_ready");
    this->io_out_mem_resp_valid.ReInit(0, IOType::Input, "io_out_mem_resp_valid");
    this->io_out_mem_resp_bits_cmd.ReInit(4, IOType::Input, "io_out_mem_resp_bits_cmd");
    this->io_out_mem_resp_bits_rdata.ReInit(64, IOType::Input, "io_out_mem_resp_bits_rdata");
    this->io_out_coh_req_ready.ReInit(0, IOType::Output, "io_out_coh_req_ready");
    this->io_out_coh_req_valid.ReInit(0, IOType::Input, "io_out_coh_req_valid");
    this->io_out_coh_req_bits_addr.ReInit(32, IOType::Input, "io_out_coh_req_bits_addr");
    this->io_out_coh_req_bits_size.ReInit(3, IOType::Input, "io_out_coh_req_bits_size");
    this->io_out_coh_req_bits_cmd.ReInit(4, IOType::Input, "io_out_coh_req_bits_cmd");
    this->io_out_coh_req_bits_wmask.ReInit(8, IOType::Input, "io_out_coh_req_bits_wmask");
    this->io_out_coh_req_bits_wdata.ReInit(64, IOType::Input, "io_out_coh_req_bits_wdata");
    this->io_out_coh_resp_ready.ReInit(0, IOType::Input, "io_out_coh_resp_ready");
    this->io_out_coh_resp_valid.ReInit(0, IOType::Output, "io_out_coh_resp_valid");
    this->io_out_coh_resp_bits_cmd.ReInit(4, IOType::Output, "io_out_coh_resp_bits_cmd");
    this->io_out_coh_resp_bits_rdata.ReInit(64, IOType::Output, "io_out_coh_resp_bits_rdata");
    this->io_mmio_req_ready.ReInit(0, IOType::Input, "io_mmio_req_ready");
    this->io_mmio_req_valid.ReInit(0, IOType::Output, "io_mmio_req_valid");
    this->io_mmio_req_bits_addr.ReInit(32, IOType::Output, "io_mmio_req_bits_addr");
    this->io_mmio_req_bits_size.ReInit(3, IOType::Output, "io_mmio_req_bits_size");
    this->io_mmio_req_bits_cmd.ReInit(4, IOType::Output, "io_mmio_req_bits_cmd");
    this->io_mmio_req_bits_wmask.ReInit(8, IOType::Output, "io_mmio_req_bits_wmask");
    this->io_mmio_req_bits_wdata.ReInit(64, IOType::Output, "io_mmio_req_bits_wdata");
    this->io_mmio_resp_ready.ReInit(0, IOType::Output, "io_mmio_resp_ready");
    this->io_mmio_resp_valid.ReInit(0, IOType::Input, "io_mmio_resp_valid");
    this->io_mmio_resp_bits_cmd.ReInit(4, IOType::Input, "io_mmio_resp_bits_cmd");
    this->io_mmio_resp_bits_rdata.ReInit(64, IOType::Input, "io_mmio_resp_bits_rdata");
    this->io_empty.ReInit(0, IOType::Output, "io_empty");
    this->victim_way_mask_valid.ReInit(0, IOType::Output, "victim_way_mask_valid");
    this->victim_way_mask.ReInit(4, IOType::Output, "victim_way_mask");


    // bind Cache pins
    this->clock.BindDPIRW((void (*)(void*))get_clock, (void (*)(const unsigned char))set_clock);
    this->reset.BindDPIRW((void (*)(void*))get_reset, (void (*)(const unsigned char))set_reset);
    this->io_in_req_ready.BindDPIRW((void (*)(void*))get_io_in_req_ready, (void (*)(const unsigned char))set_io_in_req_ready);
    this->io_in_req_valid.BindDPIRW((void (*)(void*))get_io_in_req_valid, (void (*)(const unsigned char))set_io_in_req_valid);
    this->io_in_req_bits_addr.BindDPIRW((void (*)(void*))get_io_in_req_bits_addr, (void (*)(const void*))set_io_in_req_bits_addr);
    this->io_in_req_bits_size.BindDPIRW((void (*)(void*))get_io_in_req_bits_size, (void (*)(const void*))set_io_in_req_bits_size);
    this->io_in_req_bits_cmd.BindDPIRW((void (*)(void*))get_io_in_req_bits_cmd, (void (*)(const void*))set_io_in_req_bits_cmd);
    this->io_in_req_bits_wmask.BindDPIRW((void (*)(void*))get_io_in_req_bits_wmask, (void (*)(const void*))set_io_in_req_bits_wmask);
    this->io_in_req_bits_wdata.BindDPIRW((void (*)(void*))get_io_in_req_bits_wdata, (void (*)(const void*))set_io_in_req_bits_wdata);
    this->io_in_req_bits_user.BindDPIRW((void (*)(void*))get_io_in_req_bits_user, (void (*)(const void*))set_io_in_req_bits_user);
    this->io_in_resp_ready.BindDPIRW((void (*)(void*))get_io_in_resp_ready, (void (*)(const unsigned char))set_io_in_resp_ready);
    this->io_in_resp_valid.BindDPIRW((void (*)(void*))get_io_in_resp_valid, (void (*)(const unsigned char))set_io_in_resp_valid);
    this->io_in_resp_bits_cmd.BindDPIRW((void (*)(void*))get_io_in_resp_bits_cmd, (void (*)(const void*))set_io_in_resp_bits_cmd);
    this->io_in_resp_bits_rdata.BindDPIRW((void (*)(void*))get_io_in_resp_bits_rdata, (void (*)(const void*))set_io_in_resp_bits_rdata);
    this->io_in_resp_bits_user.BindDPIRW((void (*)(void*))get_io_in_resp_bits_user, (void (*)(const void*))set_io_in_resp_bits_user);
    this->io_flush.BindDPIRW((void (*)(void*))get_io_flush, (void (*)(const void*))set_io_flush);
    this->io_out_mem_req_ready.BindDPIRW((void (*)(void*))get_io_out_mem_req_ready, (void (*)(const unsigned char))set_io_out_mem_req_ready);
    this->io_out_mem_req_valid.BindDPIRW((void (*)(void*))get_io_out_mem_req_valid, (void (*)(const unsigned char))set_io_out_mem_req_valid);
    this->io_out_mem_req_bits_addr.BindDPIRW((void (*)(void*))get_io_out_mem_req_bits_addr, (void (*)(const void*))set_io_out_mem_req_bits_addr);
    this->io_out_mem_req_bits_size.BindDPIRW((void (*)(void*))get_io_out_mem_req_bits_size, (void (*)(const void*))set_io_out_mem_req_bits_size);
    this->io_out_mem_req_bits_cmd.BindDPIRW((void (*)(void*))get_io_out_mem_req_bits_cmd, (void (*)(const void*))set_io_out_mem_req_bits_cmd);
    this->io_out_mem_req_bits_wmask.BindDPIRW((void (*)(void*))get_io_out_mem_req_bits_wmask, (void (*)(const void*))set_io_out_mem_req_bits_wmask);
    this->io_out_mem_req_bits_wdata.BindDPIRW((void (*)(void*))get_io_out_mem_req_bits_wdata, (void (*)(const void*))set_io_out_mem_req_bits_wdata);
    this->io_out_mem_resp_ready.BindDPIRW((void (*)(void*))get_io_out_mem_resp_ready, (void (*)(const unsigned char))set_io_out_mem_resp_ready);
    this->io_out_mem_resp_valid.BindDPIRW((void (*)(void*))get_io_out_mem_resp_valid, (void (*)(const unsigned char))set_io_out_mem_resp_valid);
    this->io_out_mem_resp_bits_cmd.BindDPIRW((void (*)(void*))get_io_out_mem_resp_bits_cmd, (void (*)(const void*))set_io_out_mem_resp_bits_cmd);
    this->io_out_mem_resp_bits_rdata.BindDPIRW((void (*)(void*))get_io_out_mem_resp_bits_rdata, (void (*)(const void*))set_io_out_mem_resp_bits_rdata);
    this->io_out_coh_req_ready.BindDPIRW((void (*)(void*))get_io_out_coh_req_ready, (void (*)(const unsigned char))set_io_out_coh_req_ready);
    this->io_out_coh_req_valid.BindDPIRW((void (*)(void*))get_io_out_coh_req_valid, (void (*)(const unsigned char))set_io_out_coh_req_valid);
    this->io_out_coh_req_bits_addr.BindDPIRW((void (*)(void*))get_io_out_coh_req_bits_addr, (void (*)(const void*))set_io_out_coh_req_bits_addr);
    this->io_out_coh_req_bits_size.BindDPIRW((void (*)(void*))get_io_out_coh_req_bits_size, (void (*)(const void*))set_io_out_coh_req_bits_size);
    this->io_out_coh_req_bits_cmd.BindDPIRW((void (*)(void*))get_io_out_coh_req_bits_cmd, (void (*)(const void*))set_io_out_coh_req_bits_cmd);
    this->io_out_coh_req_bits_wmask.BindDPIRW((void (*)(void*))get_io_out_coh_req_bits_wmask, (void (*)(const void*))set_io_out_coh_req_bits_wmask);
    this->io_out_coh_req_bits_wdata.BindDPIRW((void (*)(void*))get_io_out_coh_req_bits_wdata, (void (*)(const void*))set_io_out_coh_req_bits_wdata);
    this->io_out_coh_resp_ready.BindDPIRW((void (*)(void*))get_io_out_coh_resp_ready, (void (*)(const unsigned char))set_io_out_coh_resp_ready);
    this->io_out_coh_resp_valid.BindDPIRW((void (*)(void*))get_io_out_coh_resp_valid, (void (*)(const unsigned char))set_io_out_coh_resp_valid);
    this->io_out_coh_resp_bits_cmd.BindDPIRW((void (*)(void*))get_io_out_coh_resp_bits_cmd, (void (*)(const void*))set_io_out_coh_resp_bits_cmd);
    this->io_out_coh_resp_bits_rdata.BindDPIRW((void (*)(void*))get_io_out_coh_resp_bits_rdata, (void (*)(const void*))set_io_out_coh_resp_bits_rdata);
    this->io_mmio_req_ready.BindDPIRW((void (*)(void*))get_io_mmio_req_ready, (void (*)(const unsigned char))set_io_mmio_req_ready);
    this->io_mmio_req_valid.BindDPIRW((void (*)(void*))get_io_mmio_req_valid, (void (*)(const unsigned char))set_io_mmio_req_valid);
    this->io_mmio_req_bits_addr.BindDPIRW((void (*)(void*))get_io_mmio_req_bits_addr, (void (*)(const void*))set_io_mmio_req_bits_addr);
    this->io_mmio_req_bits_size.BindDPIRW((void (*)(void*))get_io_mmio_req_bits_size, (void (*)(const void*))set_io_mmio_req_bits_size);
    this->io_mmio_req_bits_cmd.BindDPIRW((void (*)(void*))get_io_mmio_req_bits_cmd, (void (*)(const void*))set_io_mmio_req_bits_cmd);
    this->io_mmio_req_bits_wmask.BindDPIRW((void (*)(void*))get_io_mmio_req_bits_wmask, (void (*)(const void*))set_io_mmio_req_bits_wmask);
    this->io_mmio_req_bits_wdata.BindDPIRW((void (*)(void*))get_io_mmio_req_bits_wdata, (void (*)(const void*))set_io_mmio_req_bits_wdata);
    this->io_mmio_resp_ready.BindDPIRW((void (*)(void*))get_io_mmio_resp_ready, (void (*)(const unsigned char))set_io_mmio_resp_ready);
    this->io_mmio_resp_valid.BindDPIRW((void (*)(void*))get_io_mmio_resp_valid, (void (*)(const unsigned char))set_io_mmio_resp_valid);
    this->io_mmio_resp_bits_cmd.BindDPIRW((void (*)(void*))get_io_mmio_resp_bits_cmd, (void (*)(const void*))set_io_mmio_resp_bits_cmd);
    this->io_mmio_resp_bits_rdata.BindDPIRW((void (*)(void*))get_io_mmio_resp_bits_rdata, (void (*)(const void*))set_io_mmio_resp_bits_rdata);
    this->io_empty.BindDPIRW((void (*)(void*))get_io_empty, (void (*)(const unsigned char))set_io_empty);
    this->victim_way_mask_valid.BindDPIRW((void (*)(void*))get_victim_way_mask_valid, (void (*)(const unsigned char))set_victim_way_mask_valid);
    this->victim_way_mask.BindDPIRW((void (*)(void*))get_victim_way_mask, (void (*)(const void*))set_victim_way_mask);


    // add Cache ports
    this->port.Add(this->clock.mName, this->clock);
    this->port.Add(this->reset.mName, this->reset);
    this->port.Add(this->io_in_req_ready.mName, this->io_in_req_ready);
    this->port.Add(this->io_in_req_valid.mName, this->io_in_req_valid);
    this->port.Add(this->io_in_req_bits_addr.mName, this->io_in_req_bits_addr);
    this->port.Add(this->io_in_req_bits_size.mName, this->io_in_req_bits_size);
    this->port.Add(this->io_in_req_bits_cmd.mName, this->io_in_req_bits_cmd);
    this->port.Add(this->io_in_req_bits_wmask.mName, this->io_in_req_bits_wmask);
    this->port.Add(this->io_in_req_bits_wdata.mName, this->io_in_req_bits_wdata);
    this->port.Add(this->io_in_req_bits_user.mName, this->io_in_req_bits_user);
    this->port.Add(this->io_in_resp_ready.mName, this->io_in_resp_ready);
    this->port.Add(this->io_in_resp_valid.mName, this->io_in_resp_valid);
    this->port.Add(this->io_in_resp_bits_cmd.mName, this->io_in_resp_bits_cmd);
    this->port.Add(this->io_in_resp_bits_rdata.mName, this->io_in_resp_bits_rdata);
    this->port.Add(this->io_in_resp_bits_user.mName, this->io_in_resp_bits_user);
    this->port.Add(this->io_flush.mName, this->io_flush);
    this->port.Add(this->io_out_mem_req_ready.mName, this->io_out_mem_req_ready);
    this->port.Add(this->io_out_mem_req_valid.mName, this->io_out_mem_req_valid);
    this->port.Add(this->io_out_mem_req_bits_addr.mName, this->io_out_mem_req_bits_addr);
    this->port.Add(this->io_out_mem_req_bits_size.mName, this->io_out_mem_req_bits_size);
    this->port.Add(this->io_out_mem_req_bits_cmd.mName, this->io_out_mem_req_bits_cmd);
    this->port.Add(this->io_out_mem_req_bits_wmask.mName, this->io_out_mem_req_bits_wmask);
    this->port.Add(this->io_out_mem_req_bits_wdata.mName, this->io_out_mem_req_bits_wdata);
    this->port.Add(this->io_out_mem_resp_ready.mName, this->io_out_mem_resp_ready);
    this->port.Add(this->io_out_mem_resp_valid.mName, this->io_out_mem_resp_valid);
    this->port.Add(this->io_out_mem_resp_bits_cmd.mName, this->io_out_mem_resp_bits_cmd);
    this->port.Add(this->io_out_mem_resp_bits_rdata.mName, this->io_out_mem_resp_bits_rdata);
    this->port.Add(this->io_out_coh_req_ready.mName, this->io_out_coh_req_ready);
    this->port.Add(this->io_out_coh_req_valid.mName, this->io_out_coh_req_valid);
    this->port.Add(this->io_out_coh_req_bits_addr.mName, this->io_out_coh_req_bits_addr);
    this->port.Add(this->io_out_coh_req_bits_size.mName, this->io_out_coh_req_bits_size);
    this->port.Add(this->io_out_coh_req_bits_cmd.mName, this->io_out_coh_req_bits_cmd);
    this->port.Add(this->io_out_coh_req_bits_wmask.mName, this->io_out_coh_req_bits_wmask);
    this->port.Add(this->io_out_coh_req_bits_wdata.mName, this->io_out_coh_req_bits_wdata);
    this->port.Add(this->io_out_coh_resp_ready.mName, this->io_out_coh_resp_ready);
    this->port.Add(this->io_out_coh_resp_valid.mName, this->io_out_coh_resp_valid);
    this->port.Add(this->io_out_coh_resp_bits_cmd.mName, this->io_out_coh_resp_bits_cmd);
    this->port.Add(this->io_out_coh_resp_bits_rdata.mName, this->io_out_coh_resp_bits_rdata);
    this->port.Add(this->io_mmio_req_ready.mName, this->io_mmio_req_ready);
    this->port.Add(this->io_mmio_req_valid.mName, this->io_mmio_req_valid);
    this->port.Add(this->io_mmio_req_bits_addr.mName, this->io_mmio_req_bits_addr);
    this->port.Add(this->io_mmio_req_bits_size.mName, this->io_mmio_req_bits_size);
    this->port.Add(this->io_mmio_req_bits_cmd.mName, this->io_mmio_req_bits_cmd);
    this->port.Add(this->io_mmio_req_bits_wmask.mName, this->io_mmio_req_bits_wmask);
    this->port.Add(this->io_mmio_req_bits_wdata.mName, this->io_mmio_req_bits_wdata);
    this->port.Add(this->io_mmio_resp_ready.mName, this->io_mmio_resp_ready);
    this->port.Add(this->io_mmio_resp_valid.mName, this->io_mmio_resp_valid);
    this->port.Add(this->io_mmio_resp_bits_cmd.mName, this->io_mmio_resp_bits_cmd);
    this->port.Add(this->io_mmio_resp_bits_rdata.mName, this->io_mmio_resp_bits_rdata);
    this->port.Add(this->io_empty.mName, this->io_empty);
    this->port.Add(this->victim_way_mask_valid.mName, this->victim_way_mask_valid);
    this->port.Add(this->victim_way_mask.mName, this->victim_way_mask);


    xfunction<int, bool> stepfunc = [&](bool d) -> int {
        return this->step(d);
    };
    this->xclk.ReInit(stepfunc, {}, {&this->port});
}

void UTCache::initClock(XData &clk)
{
    // initialize Cache clock
    xfunction<int, bool> stepfunc = [&](bool d) -> int {
        return this->step(d);
    };
    this->xclk.ReInit(stepfunc, {&clk}, {});
}