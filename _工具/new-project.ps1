# 新建一个 C++ 项目：复制 _template 里的配置文件，然后用 VS Code 打开
$ErrorActionPreference = 'Stop'
[Console]::OutputEncoding = [Text.Encoding]::UTF8

$scriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$tpl = Join-Path $scriptDir '_template'

# 项目要建在仓库根目录，而不是脚本所在的 _工具 文件夹里
$root = $null
try { $root = (& git -C $scriptDir rev-parse --show-toplevel 2>$null | Out-String).Trim() } catch { }
if ([string]::IsNullOrWhiteSpace($root) -or -not (Test-Path -LiteralPath $root)) {
    $root = Split-Path -Parent $scriptDir
}

Write-Host ''
Write-Host '========= 新建 C++ 项目 =========' -ForegroundColor Cyan
Write-Host '项目会建在：' -NoNewline; Write-Host $root -ForegroundColor DarkGray
Write-Host ''

$name = Read-Host '输入项目名字（建议英文/数字，不要空格）'
if ([string]::IsNullOrWhiteSpace($name)) {
    Write-Host '没有输入名字，已取消。' -ForegroundColor Yellow
    Read-Host '按回车关闭'; exit 1
}
$name = $name.Trim()
if ($name -match '[\\/:*?"<>|]') {
    Write-Host '名字里有 Windows 不允许的字符，已取消。' -ForegroundColor Red
    Read-Host '按回车关闭'; exit 1
}

$dir = Join-Path $root $name
if (Test-Path $dir) {
    Write-Host ''
    Write-Host "文件夹已存在，直接打开它：$dir" -ForegroundColor Yellow
} else {
    Copy-Item $tpl $dir -Recurse -Force
    Write-Host ''
    Write-Host "已创建：$dir" -ForegroundColor Green
}

Write-Host '正在用 VS Code 打开…' -ForegroundColor Green
& code $dir
Write-Host ''
Write-Host '接下来：在 main.cpp 里写代码 → Ctrl+Shift+B 编译 → F5 调试' -ForegroundColor Cyan
Start-Sleep -Seconds 2
