# 指定编译的最小版本
cmake_minimum_required(VERSION 3.0.0) 

# 指定解决方案的名字 和版本
project(test VERSION 0.1.0)

# 添加可执行项目
add_executable(test main.cpp)


# 链接第三方库

find_package(jsoncpp CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)

target_link_libraries(test PRIVATE JsonCpp::JsonCpp fmt::fmt)

