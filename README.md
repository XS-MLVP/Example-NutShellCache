# Nutshell Cache Verification with XS-MLVP
基于XS-MLVP验证环境的Nutshell Cache的验证实践（python）

## Intro
使用picker生成dut的python封装。实际上基本上整个文件夹的框架都是由picker生成的。

## Framework
![alt text](pic/image.png)

## Python Structure
```
python
├── CMakeLists.txt
├── dut.i
├── dut.py
├── func                    // 功能覆盖率检测
│   ├── __init__.py
│   └── mmio_func.py
├── __init__.py
├── Makefile
├── pytest.ini              // pytest init file
├── test                    // 测试用例
│   ├── __init__.py
│   └── random_test.py
└── util                    // 外围工具
    ├── cachewrapper.py
    ├── __init__.py
    ├── simplebus.py
    ├── simplemem.py
    └── simpleram.py
```

## Command
在最外层执行`make`将创建UT_Cache文件夹并将python中的相关文件拷贝到其中，并自动运行`__init__.py`。  
执行`make pytest`将使用pytest工具测试，具体来说测试文件为test目录下以_test结尾的文件（具体见pytest.ini），执行结束后将在UT_Cache文件夹下生成功能覆盖率的报告。  
执行`make coverage`将自动由UT_Cache文件夹中的.data文件（如果存在）生成html的行覆盖率报告。  

## TBD
目录结构太丑。  
功能覆盖率太粗糙。  