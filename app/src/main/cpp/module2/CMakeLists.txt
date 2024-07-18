cmake_minimum_required(VERSION 3.22.1)

# 声明子模块名称
project(Module2)

# 添加源文件
add_library(Module2Library SHARED
        module2.cpp
        module2.h
)

# 设置 Module2Library 需要链接的库，例如系统库或其他第三方库
target_link_libraries(Module2Library
        android
        log
)