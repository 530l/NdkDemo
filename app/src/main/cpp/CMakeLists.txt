# 设置此项目所需的最低CMake版本。
cmake_minimum_required(VERSION 3.22.1)

# 声明项目名称。可以通过 ${PROJECT_NAME} 访问项目名称，
# 因为这是顶层的 CMakeLists.txt 文件，所以项目名称也可以通过 ${CMAKE_PROJECT_NAME}
# 在顶层构建脚本范围内，这两个 CMake 变量保持同步。
project("ndkdemo")

# 通过 add_subdirectory(module1) 引入子模块时 添加子目录，即各个模块的路径
add_subdirectory(module1)
add_subdirectory(module2)
# 如果有更多的模块，可以继续添加

#添加动态库
add_library(${CMAKE_PROJECT_NAME} SHARED
        # 列出相对于这个 CMakeLists.txt 的 C/C++ 源文件。
        native-lib.cpp)

# 链接主项目与各个模块
# 指定 CMake 应链接到目标库的库。您可以链接来自各种来源的库，如在此构建脚本中定义的库、
# 预构建的第三方库或 Android 系统库。
# android   log 是ndk的变量，告诉再安卓系统运行
target_link_libraries(${CMAKE_PROJECT_NAME}
        # 列出链接到目标库的库
        android
        log
        Module1Library  # 这里假设 module1 生成的库名是 Module1Library
        Module2Library  # 这里假设 module2 生成的库名是 Module2Library
        # 如果有更多模块，继续添加
)

# 设置子模块 module1 的头文件路径
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/module1)  # module1 模块的头文件路径