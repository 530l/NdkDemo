cmake_minimum_required(VERSION 3.22.1)

# 声明子模块名称
#子模块名称 (project(Module1)):
#当你在子模块的 CMakeLists.txt 文件中使用 project(Module1)
#这样的语句时，它用来定义子模块的名称和属性。这个名称通常用于识别和区分不同的子模块，
#而不直接影响到最终生成的目标（如库或可执行文件）的名称。
project(Module1)

# 添加源文件
#目标库的名称 (Module1Library):
#目标库的名称是通过 add_library() 或 add_executable() 命令指定的，
#用来创建并命名一个具体的目标。这个名称是在 CMakeLists.txt 中定义的一个变量，用来标识生成的库或可执行文件的名称。
add_library(Module1Library SHARED
        module1.cpp
        module1.h
)

# 设置 Module1Library 需要链接的库，例如系统库或其他第三方库
target_link_libraries(Module1Library
        android
        log
)


