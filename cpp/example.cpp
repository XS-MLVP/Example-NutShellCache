#include "UT_Cache.hpp"

int main()
{
#if defined(USE_VCS)
    UTCache *dut = new UTCache("libDPICache.so");
#elif defined(USE_VERILATOR)
    UTCache *dut = new UTCache();
#endif
    dut->initClock(dut->clock);
    dut->xclk.Step(1);
    printf("Initialized UTCache\n");
    delete dut;
    printf("Deleted UTCache\n");
    return 0;
}