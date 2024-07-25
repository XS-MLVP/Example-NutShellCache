from mlvp.reporter import *


# '-k str': only run test cases with 'str' in their names
if __name__ == "__main__":
    set_title_info('Nutshell-Cache UT-Test Report')
    set_meta_info('test_case', 'Nutshell-Cache')
    report = "report/rpt.html"
    generate_pytest_report(report, args=["-s", "-n=auto"])
