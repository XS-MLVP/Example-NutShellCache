"""
    Boring packages
    Author: yzcc
"""

class ReqMsg:
    def __init__(self, addr, cmd, user=0x123, size=7, mask=0, data=0):
        self.user = user
        self.size = size
        self.addr = addr
        self.cmd = cmd
        self.mask = mask
        self.data = data

    def display(self, displayer=print):
        displayer(f"[REQ MSG] user {self.user:x}, size {self.size}, addr 0x{self.addr:x}\
              cmd 0x{self.cmd:x}, mask {self.mask:b}, data {self.data:x}")

    def set_from_dict(self, d):
        self.user = d['user']
        self.size = d['size']
        self.addr = d['addr']
        self.cmd = d['cmd']
        self.mask = d['mask']
        self.data = d['data']

    def as_dict(self):
        req = {}

        req["valid"] = True
        req["bits_addr"] = self.addr
        req["bits_size"] = self.size
        req["bits_cmd"] = self.cmd
        req["bits_wmask"] = self.mask
        req["bits_wdata"] = self.data
        req["bits_user"] = self.user

        return req

class RespMsg:
    def __init__(self, cmd, rdata, user):
        self.cmd = cmd
        self.rdata = rdata
        self.user = user

    def display(self):
        print(f"[RESP MSG] cmd 0x{self.cmd}, rdata 0x{self.rdata:x}")

    def set_from_dict(self, d):
        self.rdata = d['rdata']
        self.cmd = d['cmd']
        self.user = d['user']

    def as_dict(self):
        resp = {}
        resp["valid"] = True
        resp["bits_rdata"] = self.rdata
        resp["bits_cmd"] = self.cmd
        resp["bits_user"] = self.user

        return resp

def replicate_bits(binary_num, replication, num_bits):
    result = 0
    for i in range(num_bits):
        bit = (binary_num >> i) & 1
        for j in range(replication):
            result = result | (bit << (i * replication + j))
    return result