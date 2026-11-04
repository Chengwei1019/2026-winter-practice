# 2026 秋季学期代码仓库

记录这学期写的所有代码。每写一个项目/练习，就新建一个文件夹放进来，
改动会自动提交并推送到 GitHub 的 [Chengwei1019/2026-fall-code](https://github.com/Chengwei1019/2026-fall-code)（私有仓库）。

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

两层保险，互相兜底：

| 机制 | 触发时机 | 说明 |
| --- | --- | --- |
| GitDoc 扩展 | 保存文件后约 30 秒 | 自动 commit + push，提交信息是日期时间 |
| 计划任务 `Cpp-AutoSync` | 每 10 分钟 | 兜底补提交 + 推送，日志在 `C:\Users\lcw10\Tools\autosync.log` |

配套设置：`files.autoSave` = `afterDelay`（1 秒），所以就算忘了 `Ctrl+S`，
改动也会被写盘并记录。

**想手动确认**：左侧「源代码管理」图标，或终端 `git log --oneline -10`。

**想临时关掉**：VS Code 设置里搜 `gitdoc.enabled` 取消勾选；
或者计划任务里停用 `Cpp-AutoSync`。

## 环境

- 编译器：MSVC 19.51（Visual Studio Community 2026 自带，无需额外安装）
- 编辑器：VS Code + C/C++ 扩展 + GitDoc
- 调试器：cppvsdbg

