'''
    Maintaining a double-ended queue for req/resp messages.
    Also maintaining a absolute time scale.

    Authored by yzcc
'''

from collections import deque
from util.simplebus import SimpleBusWrapper
import xspcomm as xsp
import pytest

class MessageQueue():
    def __init__(self, clock:xsp.XClock):
        self.xclk   = clock

        self.deque  = deque(maxlen=3)
        self.ts     = 0             # clock cycles

        self.xclk.StepRis(self.StepRis)

    def pushleft(self, addr, cmd):
        self.deque.appendleft((addr, cmd, self.ts))
    
    def pushright(self, addr, cmd):
        self.deque.append((addr, cmd, self.ts))

    def popleft(self):
        return self.deque.popleft()
    
    def popright(self):
        return self.deque.pop()
    
    def peek_left(self):
        addr, cmd, ts = self.deque.popleft()
        self.deque.appendleft((addr, cmd, ts))
        return addr, cmd, ts
    
    def peek_right(self):
        addr, cmd, ts = self.deque.pop()
        self.deque.append((addr, cmd, ts))
        return addr, cmd, ts
    
    def StepRis(self, *a, **b):
        self.ts += 1