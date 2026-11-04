@echo off
rem Double-click launcher for new-project.ps1 (Chinese prompts need UTF-8 console)
chcp 65001 >nul
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0new-project.ps1"
if errorlevel 1 pause
