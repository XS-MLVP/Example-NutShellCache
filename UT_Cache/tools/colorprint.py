'''
    Print colorfully. A small tool.
    Authored by yzcc, 2024.4.13s
'''

class Color:
    BLUE    = '\033[94m'
    GREEN   = '\033[92m'
    RED     = '\033[91m'
    YELLOW  = '\033[93m'
    ENDC    = '\033[0m'

    def print_blue(str, end='\n'):
        print(Color.BLUE + str + Color.ENDC, end)
    
    def print_green(str, end='\n'):
        print(Color.GREEN + str + Color.ENDC, end)

    def print_red(str, end='\n'):
        print(Color.RED + str + Color.ENDC, end)
