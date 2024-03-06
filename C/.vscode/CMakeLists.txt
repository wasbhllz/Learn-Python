cmake_minimum_required(VERSION 3.15)  # 设置所需的 CMake 版本

# 设置编译器路径
set(CMAKE_CXX_COMPILER "D:/MinGW/bin/g++.exe")
set(CMAKE_C_COMPILER "D:/MinGW/bin/gcc.exe")
project(C)  # 设置项目名称

# 设置编译器路径
set(CMAKE_CXX_COMPILER "D:/MinGW/bin/g++.exe")
set(CMAKE_C_COMPILER "D:/MinGW/bin/gcc.exe")
project(myproject)

# 添加可执行文件
add_executable(myexample main.cpp)