'''
    Maintaining a double-ended queue for req/resp messages.
    Also maintaining a absolute time scale.

    Authored by yzcc
'''

from collections import deque
import xspcomm as xsp

class MessageQueue:
    def __init__(self, clock:xsp.XClock, maxlen=3):
        self.xclk   = clock

        # Cache only has 3 stage.
        self.deque  = deque(maxlen=maxlen)

    def pushleft(self, addr, cmd):
        self.deque.appendleft((addr, cmd, self.xclk.clk))
    
    def pushright(self, addr, cmd):
        self.deque.append((addr, cmd, self.xclk.clk))

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
    
    def length(self):
        return len(self.deque)
