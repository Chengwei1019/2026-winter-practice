// main.cpp —— MSVC x64 示例程序
// 按 Ctrl+Shift+B 编译，按 F5 调试运行
#include <windows.h>

#include <iostream>
#include <string>
#include <vector>

int main() {
    // 让控制台按 UTF-8 输出，避免中文变成乱码
    SetConsoleOutputCP(CP_UTF8);

    std::vector<std::string> langs{"C++", "MSVC", "CMake"};
    std::cout << "你好，C++ 环境配置成功！" << std::endl;
    std::cout << "编译器: MSVC " << _MSC_VER << " / C++ 标准: " << __cplusplus << "\n";

    for (const auto& l : langs) {
        std::cout << " - " << l << '\n';
    }

    int a = 0;
    std::cout << "请输入一个数字（调试时可在这里下断点）：" << std::flush;
    std::cin >> a;
    std::cout << "你输入的是 " << a << "，两倍是 " << a * 2 << std::endl;
    return 0;
}
