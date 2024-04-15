'''
    Simple assertion, use in callback function
    Authored by yzcc, 2024.4.15
'''
from .colorprint import Color as cl

def my_assert(cond: int, msg=""):
    if (not cond):
        cl.print_red(msg)
        assert(0)