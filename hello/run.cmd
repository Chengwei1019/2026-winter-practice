@echo off
rem ============================================================
rem  run.cmd - build then run one C++ source file (MSVC x64)
rem ============================================================
setlocal

call "%~dp0build.cmd" %*
if errorlevel 1 exit /b %ERRORLEVEL%

set "SRC=%~f1"
for %%F in ("%SRC%") do set "NAME=%%~nF"

if not exist "%~dp0bin\%NAME%.exe" (
    echo [run] no such file: %~dp0bin\%NAME%.exe
    exit /b 1
)

"%~dp0bin\%NAME%.exe"
exit /b %ERRORLEVEL%
