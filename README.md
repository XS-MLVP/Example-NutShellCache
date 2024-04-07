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
├── func                            // 用于pytest-cov生成功能覆盖率报告
│   ├── __init__.py
│   ├── io_func.py                  // io相关的功能检测（目前只有Cache hit/miss）
│   └── mmio_func.py                // mmio相关的功能检测（read, write, 转发以及block）
├── __init__.py
├── Makefile
├── pytest.ini
├── test
│   ├── func_checker.py             // 所有功能检测的包装，在这里检测条件，然后到func目录下触发
│   ├── __init__.py
│   └── random_test.py
└── util
    ├── cachewrapper.py
    ├── __init__.py
    ├── message_queue.py            // 简单的消息队列，队列项包含时间戳。主要用于时序相关的feature检测
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

## 更新日志
[2024.4.7]：  
1. 围绕功能点测试调整python测试目录结构。目前思路是在`func_checker.py`中触发功能点检测，然后到func目录下执行相关函数触发覆盖率检测。  
2. 解耦simpleram和总线。方便监控连接simpleram上的总线的信号。  
3. 新增`message_queue.py`，简单的带时间戳的消息队列。主要用于检测与时序相关的feature。