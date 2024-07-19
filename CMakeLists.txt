# 指定编译的最小版本
cmake_minimum_required(VERSION 3.0.0) 

enable_testing()

# 指定解决方案的名字 和版本
project(test_vcpkg VERSION 0.1.0)

# 添加可执行项目
add_executable(test_vcpkg main.cpp)


# 链接第三方库

find_package(jsoncpp CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)

target_link_libraries(test_vcpkg PRIVATE JsonCpp::JsonCpp fmt::fmt )

# 声明要测试的可执行文件
add_executable(
  hello_test
  gtest.cpp
)
# 链接 GoogleTest 主要库
target_link_libraries(
  hello_test
  GTest::gtest
  GTest::gtest_main
)

# 包含 GoogleTest 模块
include(GoogleTest)
# 使用 gtest_discover_tests 函数来自动发现并添加测试
gtest_discover_tests(hello_test)

add_test(AllTestsInMain main)

