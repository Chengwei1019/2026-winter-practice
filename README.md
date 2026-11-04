# 2026 冬季实践 · 代码仓库

记录 2026 冬季实践期间写的所有代码。每写一个项目/练习，就新建一个文件夹放进来，
改动会自动提交并推送到 GitHub 的 [Chengwei1019/2026-winter-practice](https://github.com/Chengwei1019/2026-winter-practice)（公开仓库）。

## 目录结构

```
.
├── hello\                 示例项目（MSVC + VS Code 调试配置）
├── _template\             新建项目用的空模板
├── 新建 C++ 项目.cmd       双击 → 输入名字 → 自动建项目并打开 VS Code
├── new-project.ps1        上面那个按钮背后跑的脚本
└── .gitignore             忽略编译产物（bin\、*.exe、*.obj 等）
```

## 写代码的流程

1. 双击 `新建 C++ 项目.cmd`，输入项目名（如 `week3-链表`）。
2. VS Code 自动打开新项目，在 `main.cpp` 里写代码。
3. `Ctrl+Shift+B` 编译，`F5` 调试。
4. 改动会自动提交并推送，不用手动 `git commit`。

## 自动同步是怎么做的

后台有一个监听服务，**跟用什么编辑器无关**（VS Code、Dev-C++、记事本改的都算）：

| 机制 | 触发时机 | 说明 |
| --- | --- | --- |
| 监听服务 `autosync-watch.ps1` | 文件改动后**静止 20 秒** | 自动 `git add` + `commit` + `push`，提交信息是日期时间 |
| 计划任务 `Cpp-AutoSync` | 每 10 分钟 | 兜底：万一监听服务没在跑，10 分钟内也会补上 |
| 开机自启 | 登录 Windows 时 | 启动文件夹里的 `CppAutoSync.vbs` 负责把监听服务拉起来 |

脚本位置：`C:\Users\lcw10\Tools\autosync-watch.ps1`、`autosync.ps1`
日志：`C:\Users\lcw10\Tools\autosync-watch.log`、`autosync.log`

配套设置：`files.autoSave` = `afterDelay`（1 秒），所以就算忘了 `Ctrl+S`，
改动也会被写盘并被监听服务记录。

**想手动确认**：左侧「源代码管理」图标，或终端 `git log --oneline -10`。

**想临时关掉**：任务管理器里结束那个 `powershell`（命令行含 autosync-watch），
并从启动文件夹删掉 `CppAutoSync.vbs`；计划任务里也停用 `Cpp-AutoSync`。

## 环境

- 编译器：MSVC 19.51（Visual Studio Community 2026 自带，无需额外安装）
- 编辑器：VS Code + C/C++ 扩展
- 调试器：cppvsdbg
- 自动同步：后台监听服务（见上）

