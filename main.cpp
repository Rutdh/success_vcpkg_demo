#include <iostream>
#include <fmt/core.h>
#include <json/json.h>
#include "gtest/gtest.h"

int main() {
    int num = 42;
    std::string text = "Hello, fmt!";
    
    // 使用 fmt 库进行格式化输出
    std::string formatted = fmt::format("Number: {}, Text: {}", num, text);
    
    std::cout << formatted << std::endl;
    
        // 创建 JSON 对象
    Json::Value root;
    root["name"] = "John";
    root["age"] = 30;
    root["city"] = "New York";

    // 将 JSON 对象转换为 JSON 字符串
    Json::StreamWriterBuilder writer;
    std::string json_str = Json::writeString(writer, root);

    std::cout << "JSON String: " << json_str << std::endl;
    return 0;
}
