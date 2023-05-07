# cmake

本项目作为工程模板, 可为后续项目开发的初始模板

## 目录组成

* .vscode: 由于工程是在vs code中编辑的, 保存了一些vs code的配置信息, 例如debug时的参数配置
* cmake: cmake用到的头文件(暂时为空)
* docs: 文档目录(暂时为空)
* examples: 存放例子程序, 例如, mybenchmark, myspdlog等
* external: 工程用到的外部库, 可根据需要增删
* logs: 存放spdlog生成的日志, 注意只有pwd对应的工作目录是主目录时才有效
* main: 主调程序
* packaging: 工程运行所需的程序包(暂时为空)
* test: 测试目录
* func1, func2: 实现项目具体功能的库文件工程, 工程采用弱主干设置, 每个功能被分配到不同的库文件func中, 编译为.so或.a文件, main函数较短且仅起到功能调用的作用

## 第三方库

以下第三方库的例子程序见examples文件夹
* [spdlog](https://github.com/gabime/spdlog): 日志库
* [google benchmark](https://github.com/google/benchmark): google开发的时间测试程序
* [google test](https://github.com/google/googletest): google开发的测试库
