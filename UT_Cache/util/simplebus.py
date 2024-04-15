import xspcomm as xsp
    
class SimpleBusWrapper:
    def __init__(self, port:xsp.XPort, prefix=""):
        self.cmd_read = 0b0000
        self.cmd_write = 0b0001
        self.cmd_readBurst = 0b0010
        self.cmd_writeBurst = 0b0011
        self.cmd_writeLast = 0b0111
        self.cmd_probe = 0b1000
        self.cmd_prefetch = 0b0100
        self.cmd_readLast = 0b0110
        self.cmd_writeResp = 0b0101
        self.cmd_probeHit = 0b1100
        self.cmd_probMiss = 0b1000
        self.port = port.NewSubPort(prefix)
    
    def get_req_addr(self):
        return self.port["req_bits_addr"].value
    
    def get_req_wdata(self):
        return self.port["req_bits_wdata"].value
    
    def get_req_cmd(self):
        return self.port["req_bits_cmd"].value

    def get_req_wmask(self):
        return self.port["req_bits_wmask"].value
    
    def get_resp_rdata(self):
        return self.port["resp_bits_rdata"].value
    
    def get_resp_cmd(self):
        return self.port["resp_bits_cmd"].value

    def IsReqReady(self):
        return self.port["req_ready"].value == 1
    
    def IsReqSend(self):
        return self.IsReqReady() and self.IsReqValid()
    
    def IsRespSend(self):
        return self.IsRespReady() and self.IsRespValid()

    def ReqSetReady(self):
        self.port["req_ready"].value = 1
    
    def ReqUnReady(self):
        self.port["req_ready"].value = 0

    def ReqSetValid(self):
        self.port["req_valid"].value = 1

    def ReqUnValid(self):
        self.port["req_valid"].value = 0

    def ReqReadData(self, addr):
        self.port["resp_ready"].value = 1
        self.port["req_bits_user"].value = 0x123
        self.port["req_bits_addr"].value = addr
        self.port["req_bits_size"].value = 7
        self.port["req_bits_cmd"].value = self.cmd_read
        return self.port["resp_bits_rdata"]

    def ReqWriteData(self, addr, data, mask):
        self.port["resp_ready"].value = 1
        self.port["req_bits_addr"].value = addr
        self.port["req_bits_size"].value = 7
        self.port["req_bits_cmd"].value = self.cmd_write
        self.port["req_bits_wmask"].value = mask
        self.port["req_bits_wdata"].value = data
        return True

    def RespWriteData(self, cmd, data):
        self.port["resp_valid"].value = 1
        self.port["resp_bits_cmd"].value = cmd
        self.port["resp_bits_rdata"].value = data
        return True

    def RespReadData(self, cmd, data):
        return self.RespWriteData(cmd, data)

    def RespData(self):
        return self.port["resp_bits_rdata"]

    def IsRespReady(self):
        return self.port["resp_ready"].value == 1

    def IsReqValid(self):
        return self.port["req_valid"].value == 1

    def IsRespValid(self):
        return self.port["resp_valid"].value == 1

    def IsRespWriteCmp(self):
        return self.port["resp_bits_cmd"].value == self.cmd_writeResp

    def IsReqRead(self):
        return self.port["req_bits_cmd"].value == self.cmd_read and self.IsReqValid()

    def IsReqReadBurst(self):
        return self.port["req_bits_cmd"].value == self.cmd_readBurst and self.IsReqValid()

    def IsReqWrite(self):
        return self.port["req_bits_cmd"].value == self.cmd_write and self.IsReqValid()

    def IsReqWriteBurst(self):
        return self.port["req_bits_cmd"].value == self.cmd_writeBurst and self.IsReqValid()

    def IsReqWriteLast(self):
        return self.port["req_bits_cmd"].value == self.cmd_writeLast and self.IsReqValid()

    def Zero(self):
        self.port.SetZero()

    def str_cmd(self):
        if self.IsReqReady():
            cmd = self.port["req_bits_cmd"].value.U()
            if cmd == 0b0000:
                return "read"
            elif cmd == 0b0001:
                return "write"
            elif cmd == 0b0010:
                return "readBurst"
            elif cmd == 0b0011:
                return "writeBurst"
            elif cmd == 0b0111:
                return "writeLast"
            elif cmd == 0b1000:
                return "probe"
            elif cmd == 0b0100:
                return "prefetch"
            else:
                return "unknown"
        if self.IsRespReady():
            cmd = self.port["resp_bits_cmd"].value.U()
            if cmd == 0b0110:
                return "readLast"
            elif cmd == 0b0101:
                return "writeResp"
            elif cmd == 0b1100:
                return "probeHit"
            elif cmd == 0b1000:
                return "probMiss"
            else:
                return "unknown"

    #def String(self):
    #    return xsp.sFmt(
    #        "CMD:%s, ADDR:%d, DATA:%d", self.str_cmd(),
    #        self.port["req_bits_addr"].U(), self.port["req_bits_wdata"].U())
