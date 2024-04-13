
%module(directors="1") libUT_Cache

%feature("director") DutUnifiedBase;
%ignore DutUnifiedBase::DutUnifiedBase(std::initializer_list<const char *> args);

%{
#include "dut_base.hpp"
#include "UT_Cache_dpi.hpp"
%}

%define USE_VERILATOR
%enddef


%apply unsigned long long {u_int64_t}
%apply unsigned int {u_uint32_t}
%apply unsigned short {u_uint16_t}
%apply unsigned char {u_uint8_t}

%apply unsigned long long {uint64_t}
%apply unsigned int {uint32_t}
%apply unsigned short {uint16_t}
%apply unsigned char {uint8_t}

%apply long long {i_int64_t}
%apply int {i_int32_t}
%apply short {i_int16_t}
%apply char {i_int8_t}

%apply long long {int64_t}
%apply int {int32_t}
%apply short {int16_t}
%apply char {int8_t}

%include std_string.i
%include std_map.i
%include std_vector.i

%include "dut_base.hpp"
%include "UT_Cache_dpi.hpp"

%constant void (*DPIRclock)(void*) =  get_clock;
%constant void (*DPIWclock)(const unsigned char) = set_clock;
%constant void (*DPIRreset)(void*) =  get_reset;
%constant void (*DPIWreset)(const unsigned char) = set_reset;
%constant void (*DPIRio_in_req_ready)(void*) =  get_io_in_req_ready;
%constant void (*DPIWio_in_req_ready)(const unsigned char) = set_io_in_req_ready;
%constant void (*DPIRio_in_req_valid)(void*) =  get_io_in_req_valid;
%constant void (*DPIWio_in_req_valid)(const unsigned char) = set_io_in_req_valid;
%constant void (*DPIRio_in_req_bits_addr)(void*) =  get_io_in_req_bits_addr;
%constant void (*DPIWio_in_req_bits_addr)(const void*) = set_io_in_req_bits_addr;
%constant void (*DPIRio_in_req_bits_size)(void*) =  get_io_in_req_bits_size;
%constant void (*DPIWio_in_req_bits_size)(const void*) = set_io_in_req_bits_size;
%constant void (*DPIRio_in_req_bits_cmd)(void*) =  get_io_in_req_bits_cmd;
%constant void (*DPIWio_in_req_bits_cmd)(const void*) = set_io_in_req_bits_cmd;
%constant void (*DPIRio_in_req_bits_wmask)(void*) =  get_io_in_req_bits_wmask;
%constant void (*DPIWio_in_req_bits_wmask)(const void*) = set_io_in_req_bits_wmask;
%constant void (*DPIRio_in_req_bits_wdata)(void*) =  get_io_in_req_bits_wdata;
%constant void (*DPIWio_in_req_bits_wdata)(const void*) = set_io_in_req_bits_wdata;
%constant void (*DPIRio_in_req_bits_user)(void*) =  get_io_in_req_bits_user;
%constant void (*DPIWio_in_req_bits_user)(const void*) = set_io_in_req_bits_user;
%constant void (*DPIRio_in_resp_ready)(void*) =  get_io_in_resp_ready;
%constant void (*DPIWio_in_resp_ready)(const unsigned char) = set_io_in_resp_ready;
%constant void (*DPIRio_in_resp_valid)(void*) =  get_io_in_resp_valid;
%constant void (*DPIWio_in_resp_valid)(const unsigned char) = set_io_in_resp_valid;
%constant void (*DPIRio_in_resp_bits_cmd)(void*) =  get_io_in_resp_bits_cmd;
%constant void (*DPIWio_in_resp_bits_cmd)(const void*) = set_io_in_resp_bits_cmd;
%constant void (*DPIRio_in_resp_bits_rdata)(void*) =  get_io_in_resp_bits_rdata;
%constant void (*DPIWio_in_resp_bits_rdata)(const void*) = set_io_in_resp_bits_rdata;
%constant void (*DPIRio_in_resp_bits_user)(void*) =  get_io_in_resp_bits_user;
%constant void (*DPIWio_in_resp_bits_user)(const void*) = set_io_in_resp_bits_user;
%constant void (*DPIRio_flush)(void*) =  get_io_flush;
%constant void (*DPIWio_flush)(const void*) = set_io_flush;
%constant void (*DPIRio_out_mem_req_ready)(void*) =  get_io_out_mem_req_ready;
%constant void (*DPIWio_out_mem_req_ready)(const unsigned char) = set_io_out_mem_req_ready;
%constant void (*DPIRio_out_mem_req_valid)(void*) =  get_io_out_mem_req_valid;
%constant void (*DPIWio_out_mem_req_valid)(const unsigned char) = set_io_out_mem_req_valid;
%constant void (*DPIRio_out_mem_req_bits_addr)(void*) =  get_io_out_mem_req_bits_addr;
%constant void (*DPIWio_out_mem_req_bits_addr)(const void*) = set_io_out_mem_req_bits_addr;
%constant void (*DPIRio_out_mem_req_bits_size)(void*) =  get_io_out_mem_req_bits_size;
%constant void (*DPIWio_out_mem_req_bits_size)(const void*) = set_io_out_mem_req_bits_size;
%constant void (*DPIRio_out_mem_req_bits_cmd)(void*) =  get_io_out_mem_req_bits_cmd;
%constant void (*DPIWio_out_mem_req_bits_cmd)(const void*) = set_io_out_mem_req_bits_cmd;
%constant void (*DPIRio_out_mem_req_bits_wmask)(void*) =  get_io_out_mem_req_bits_wmask;
%constant void (*DPIWio_out_mem_req_bits_wmask)(const void*) = set_io_out_mem_req_bits_wmask;
%constant void (*DPIRio_out_mem_req_bits_wdata)(void*) =  get_io_out_mem_req_bits_wdata;
%constant void (*DPIWio_out_mem_req_bits_wdata)(const void*) = set_io_out_mem_req_bits_wdata;
%constant void (*DPIRio_out_mem_resp_ready)(void*) =  get_io_out_mem_resp_ready;
%constant void (*DPIWio_out_mem_resp_ready)(const unsigned char) = set_io_out_mem_resp_ready;
%constant void (*DPIRio_out_mem_resp_valid)(void*) =  get_io_out_mem_resp_valid;
%constant void (*DPIWio_out_mem_resp_valid)(const unsigned char) = set_io_out_mem_resp_valid;
%constant void (*DPIRio_out_mem_resp_bits_cmd)(void*) =  get_io_out_mem_resp_bits_cmd;
%constant void (*DPIWio_out_mem_resp_bits_cmd)(const void*) = set_io_out_mem_resp_bits_cmd;
%constant void (*DPIRio_out_mem_resp_bits_rdata)(void*) =  get_io_out_mem_resp_bits_rdata;
%constant void (*DPIWio_out_mem_resp_bits_rdata)(const void*) = set_io_out_mem_resp_bits_rdata;
%constant void (*DPIRio_out_coh_req_ready)(void*) =  get_io_out_coh_req_ready;
%constant void (*DPIWio_out_coh_req_ready)(const unsigned char) = set_io_out_coh_req_ready;
%constant void (*DPIRio_out_coh_req_valid)(void*) =  get_io_out_coh_req_valid;
%constant void (*DPIWio_out_coh_req_valid)(const unsigned char) = set_io_out_coh_req_valid;
%constant void (*DPIRio_out_coh_req_bits_addr)(void*) =  get_io_out_coh_req_bits_addr;
%constant void (*DPIWio_out_coh_req_bits_addr)(const void*) = set_io_out_coh_req_bits_addr;
%constant void (*DPIRio_out_coh_req_bits_size)(void*) =  get_io_out_coh_req_bits_size;
%constant void (*DPIWio_out_coh_req_bits_size)(const void*) = set_io_out_coh_req_bits_size;
%constant void (*DPIRio_out_coh_req_bits_cmd)(void*) =  get_io_out_coh_req_bits_cmd;
%constant void (*DPIWio_out_coh_req_bits_cmd)(const void*) = set_io_out_coh_req_bits_cmd;
%constant void (*DPIRio_out_coh_req_bits_wmask)(void*) =  get_io_out_coh_req_bits_wmask;
%constant void (*DPIWio_out_coh_req_bits_wmask)(const void*) = set_io_out_coh_req_bits_wmask;
%constant void (*DPIRio_out_coh_req_bits_wdata)(void*) =  get_io_out_coh_req_bits_wdata;
%constant void (*DPIWio_out_coh_req_bits_wdata)(const void*) = set_io_out_coh_req_bits_wdata;
%constant void (*DPIRio_out_coh_resp_ready)(void*) =  get_io_out_coh_resp_ready;
%constant void (*DPIWio_out_coh_resp_ready)(const unsigned char) = set_io_out_coh_resp_ready;
%constant void (*DPIRio_out_coh_resp_valid)(void*) =  get_io_out_coh_resp_valid;
%constant void (*DPIWio_out_coh_resp_valid)(const unsigned char) = set_io_out_coh_resp_valid;
%constant void (*DPIRio_out_coh_resp_bits_cmd)(void*) =  get_io_out_coh_resp_bits_cmd;
%constant void (*DPIWio_out_coh_resp_bits_cmd)(const void*) = set_io_out_coh_resp_bits_cmd;
%constant void (*DPIRio_out_coh_resp_bits_rdata)(void*) =  get_io_out_coh_resp_bits_rdata;
%constant void (*DPIWio_out_coh_resp_bits_rdata)(const void*) = set_io_out_coh_resp_bits_rdata;
%constant void (*DPIRio_mmio_req_ready)(void*) =  get_io_mmio_req_ready;
%constant void (*DPIWio_mmio_req_ready)(const unsigned char) = set_io_mmio_req_ready;
%constant void (*DPIRio_mmio_req_valid)(void*) =  get_io_mmio_req_valid;
%constant void (*DPIWio_mmio_req_valid)(const unsigned char) = set_io_mmio_req_valid;
%constant void (*DPIRio_mmio_req_bits_addr)(void*) =  get_io_mmio_req_bits_addr;
%constant void (*DPIWio_mmio_req_bits_addr)(const void*) = set_io_mmio_req_bits_addr;
%constant void (*DPIRio_mmio_req_bits_size)(void*) =  get_io_mmio_req_bits_size;
%constant void (*DPIWio_mmio_req_bits_size)(const void*) = set_io_mmio_req_bits_size;
%constant void (*DPIRio_mmio_req_bits_cmd)(void*) =  get_io_mmio_req_bits_cmd;
%constant void (*DPIWio_mmio_req_bits_cmd)(const void*) = set_io_mmio_req_bits_cmd;
%constant void (*DPIRio_mmio_req_bits_wmask)(void*) =  get_io_mmio_req_bits_wmask;
%constant void (*DPIWio_mmio_req_bits_wmask)(const void*) = set_io_mmio_req_bits_wmask;
%constant void (*DPIRio_mmio_req_bits_wdata)(void*) =  get_io_mmio_req_bits_wdata;
%constant void (*DPIWio_mmio_req_bits_wdata)(const void*) = set_io_mmio_req_bits_wdata;
%constant void (*DPIRio_mmio_resp_ready)(void*) =  get_io_mmio_resp_ready;
%constant void (*DPIWio_mmio_resp_ready)(const unsigned char) = set_io_mmio_resp_ready;
%constant void (*DPIRio_mmio_resp_valid)(void*) =  get_io_mmio_resp_valid;
%constant void (*DPIWio_mmio_resp_valid)(const unsigned char) = set_io_mmio_resp_valid;
%constant void (*DPIRio_mmio_resp_bits_cmd)(void*) =  get_io_mmio_resp_bits_cmd;
%constant void (*DPIWio_mmio_resp_bits_cmd)(const void*) = set_io_mmio_resp_bits_cmd;
%constant void (*DPIRio_mmio_resp_bits_rdata)(void*) =  get_io_mmio_resp_bits_rdata;
%constant void (*DPIWio_mmio_resp_bits_rdata)(const void*) = set_io_mmio_resp_bits_rdata;
%constant void (*DPIRio_empty)(void*) =  get_io_empty;
%constant void (*DPIWio_empty)(const unsigned char) = set_io_empty;
%constant void (*DPIRvictim_way_mask_valid)(void*) =  get_victim_way_mask_valid;
%constant void (*DPIWvictim_way_mask_valid)(const unsigned char) = set_victim_way_mask_valid;
%constant void (*DPIRvictim_way_mask)(void*) =  get_victim_way_mask;
%constant void (*DPIWvictim_way_mask)(const void*) = set_victim_way_mask;


