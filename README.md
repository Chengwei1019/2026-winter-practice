# 本学期代码仓库

记录 2026 秋季学期写的所有代码。每写一个项目/练习，就在 `cpp\` 下建一个文件夹，
提交记录会自动同步到 GitHub。

## 目录结构

```
.
├── cpp\
│   ├── hello\            示例项目（MSVC + VS Code 调试配置）
│   ├── _template\        新建项目用的空模板
│   ├── 新建 C++ 项目.cmd  双击 → 输入名字 → 自动建项目并打开 VS Code
│   └── new-project.ps1   上面那个按钮背后跑的脚本
└── .gitignore            忽略编译产物（bin\、*.exe、*.obj 等）
```

## 写代码的流程

1. 双击 `cpp\新建 C++ 项目.cmd`，输入项目名（如 `week3-链表`）。
2. VS Code 自动打开新项目，在 `main.cpp` 里写代码。
3. `Ctrl+Shift+B` 编译，`F5` 调试。
4. 保存后改动会自动提交并推送到 GitHub（见下）。

## 自动同步是怎么做的

| 机制 | 触发时机 | 作用 |
| --- | --- | --- |
| GitDoc 扩展 | 保存文件后延迟几秒 | 自动 commit + push，提交信息里带时间 |
| 计划任务 | 每 10 分钟 | 兜底：把漏掉的改动补提交并推送 |

想手动看一眼状态：VS Code 左侧「源代码管理」图标，或终端里 `git log --oneline -10`。

临时关掉自动提交：VS Code 设置里搜 `gitdoc.enabled`，取消勾选即可。

## 环境

- 编译器：MSVC 19.51（Visual Studio Community 2026 自带）
- 编辑器：VS Code + C/C++ 扩展
- 调试器：cppvsdbg
