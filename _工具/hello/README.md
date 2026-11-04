# C++ 开发环境（MSVC x64）

这套配置用的是你机器上**已经装好的** Visual Studio Community 2026 里的 MSVC 工具链，
没有再额外下载 Build Tools。

| 项目 | 值 |
| --- | --- |
| 编译器 | `cl.exe` 19.51（MSVC 14.51.36231，x64） |
| Windows SDK | 10.0.26100.0 |
| C++ 标准 | C++20 |
| 调试器 | `cppvsdbg`（VS Code C/C++ 扩展自带，无需 gdb） |
| 源文件编码 | UTF-8（编译时带 `/utf-8`，中文不会乱码） |

## 怎么用

1. 用 VS Code 打开这个文件夹（`hello`）。
2. 打开 `main.cpp`。
3. **Ctrl+Shift+B** → 编译，生成 `bin\main.exe`。
4. **F5** → 编译 + 启动调试（`bin\main.exe` 里下断点即可）。
5. 不想调试、只想跑一下：`终端 → 运行任务 → build & run (MSVC x64)`。

## 新建一个项目

**双击 `C:\Users\lcw10\Cpp\新建 C++ 项目.cmd`**，输入项目名字，它会自动复制
`_template` 里的一套配置到 `C:\Users\lcw10\Cpp\<名字>`，并用 VS Code 打开，直接就能写。

不想用脚本的话，也可以手动把 `Cpp\_template` 整个文件夹复制一份、改名，再用 VS Code 打开。
`.vscode` 里的三个配置文件都是通用写法（用 `${workspaceFolder}` 和 `${file}`），
换文件夹、改文件名都不用动。

## 各文件作用

| 文件 | 作用 |
| --- | --- |
| `build.cmd` | 加载 MSVC 环境（`vcvars64.bat`）后用 `cl` 编译，产物进 `bin\` |
| `run.cmd` | 先编译再运行 |
| `.vscode/tasks.json` | 定义“编译”任务（Ctrl+Shift+B 的默认任务） |
| `.vscode/launch.json` | F5 调试配置，调试器 `cppvsdbg` |
| `.vscode/settings.json` | 本文件夹的 IntelliSense 设置（MSVC x64 / C++20） |

## 全局设置已经做了这些

改的是 `%APPDATA%\Code\User\settings.json`（原文件备份为 `settings.json.bak-20261104`）：

- `C_Cpp.default.compilerPath` 指向 `cl.exe` —— 任何文件夹打开 `.cpp` 都有正确的
  头文件补全和跳转，不用每个项目单独配置。
- `C_Cpp.default.cppStandard` = `c++20`，`C_Cpp.default.cStandard` = `c17`。
- 终端下拉菜单里多了一个 **MSVC x64 (Developer)**：
  在这个终端里直接敲 `cl`、`nmake`、`msbuild` 都能用（普通 PowerShell 里 `cl` 不在 PATH，这是正常的）。

## 常见问题

**想改用 g++？** 你机器上已经有一套 MinGW（`g++`、`cmake`、`ninja` 都在 PATH 里）。
在 `.vscode/settings.json` 里删掉那几行 MSVC 设置，或把 `intelliSenseMode` 改成
`windows-gcc-x64`，`compilerPath` 指向 `g++.exe` 即可。

**升级 Visual Studio 后 IntelliSense 提示找不到编译器？**
版本号目录会变。在新版 `C:\Program Files\Microsoft Visual Studio\18\Community\VC\Tools\MSVC\`
下找一个新目录，把 `settings.json` 和 `build.cmd` 里对应的版本号替换掉即可
（`build.cmd` 用的是 `vcvars64.bat`，通常无需改动）。

**`build.cmd` 报找不到 VS 环境？**
说明 VS 安装路径变了，改 `build.cmd` 里的 `VSROOT` 变量。
