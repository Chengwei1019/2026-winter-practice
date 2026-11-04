# 2026 冬季实践 · 代码仓库

记录 2026 冬季实践期间写的所有代码。仓库地址：
[Chengwei1019/2026-winter-practice](https://github.com/Chengwei1019/2026-winter-practice)（公开）

**本地位置：`D:\2026-winter-practice`** —— 以后代码都写在这个文件夹里，才会自动同步。

## 目录结构

```
D:\2026-winter-practice\
├── _工具\                  ← 所有「跟同步/配置有关的」东西都收在这里，写代码时不用管
│   ├── 新建 C++ 项目.cmd    双击 → 输入名字 → 自动建项目并打开 VS Code
│   ├── new-project.ps1     上面那个按钮背后跑的脚本
│   ├── _template\          新建项目用的空模板
│   ├── hello\              示例项目（MSVC + VS Code 调试配置）
│   └── README.md           本说明
├── 11.4-冰雹猜想.cpp        ← 你的代码，直接放在根目录
├── 11.4-哥德巴赫猜想.cpp
└── .gitignore              忽略编译产物（bin\、*.exe、*.obj 等），必须在根目录
```

根目录只放两样东西：**`_工具` 文件夹** 和 **你写的代码**。

## 写代码的流程

1. 双击 `_工具\新建 C++ 项目.cmd`，输入项目名（如 `week3-链表`）。
2. VS Code 自动打开新项目（建在仓库根目录），在 `main.cpp` 里写代码。
3. `Ctrl+Shift+B` 编译，`F5` 调试。
4. 改动会自动提交并推送，不用手动 `git commit`。

单个 .cpp 小练习也可以直接丢在 `D:\2026-winter-practice` 根目录，同样会被同步。

## 自动同步是怎么做的

后台有一个监听服务，**跟用什么编辑器无关**（VS Code、Dev-C++、记事本改的都算）：

| 机制 | 触发时机 | 说明 |
| --- | --- | --- |
| 监听服务 `autosync-watch.ps1` | 文件改动后**静止 20 秒** | 自动 `git add` + `commit` + `push` |
| 每分钟补推 | 工作区干净时 | 断网期间攒下的提交，联网后自动补推 |
| 计划任务 `Cpp-AutoSync` | 每 10 分钟 | 兜底，防止长时间漏同步 |
| 看门狗 `Cpp-AutoSync-KeepAlive` | 每 5 分钟 | 监听服务挂了自动重启 |
| 开机自启 | 登录 Windows 时 | 启动文件夹里的 `CppAutoSync.vbs` |

远端有新提交时（例如在 GitHub 网页上改过文件），监听服务会**自动 `pull --rebase` 再重推**，不会卡死。

脚本：`C:\Users\lcw10\Tools\autosync-watch.ps1`、`autosync.ps1`
日志：`C:\Users\lcw10\Tools\autosync-watch.log`、`autosync.log`

配套设置：`files.autoSave` = `afterDelay`（1 秒），忘了 `Ctrl+S` 也会被记录。

**想手动确认**：VS Code 左侧「源代码管理」图标，或终端 `git log --oneline -10`。

**想临时关掉**：结束命令行含 `autosync-watch` 的 powershell 进程，
并从启动文件夹删掉 `CppAutoSync.vbs`，同时停用两个计划任务。

## 环境

- 编译器：MSVC 19.51（Visual Studio Community 2026 自带，无需额外安装）
- 编辑器：VS Code + C/C++ 扩展
- 调试器：cppvsdbg
- 自动同步：后台监听服务（见上）
