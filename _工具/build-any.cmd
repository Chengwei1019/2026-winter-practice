@echo off
rem ============================================================
rem  build-any.cmd - compile ONE source file with MSVC x64
rem
rem  Usage : build-any.cmd <source.cpp> [output-dir]
rem  Called by .vscode\tasks.json at the repository root, so any
rem  single .cpp dropped in the root folder can be built with
rem  Ctrl+Shift+B, and debugged with F5.
rem ============================================================
setlocal

set "VSROOT=C:\Program Files\Microsoft Visual Studio\18\Community"
set "VCVARS=%VSROOT%\VC\Auxiliary\Build\vcvars64.bat"

if "%~1"=="" goto :usage
if not exist "%VCVARS%" goto :novs

call "%VCVARS%" >nul
if errorlevel 1 goto :novs

set "SRC=%~f1"
set "OUTDIR=%~2"
if "%OUTDIR%"=="" set "OUTDIR=%~dp1bin"

set "NAME=%~n1"
if not exist "%OUTDIR%" mkdir "%OUTDIR%"

rem build inside the output folder so .obj/.pdb land there too
pushd "%OUTDIR%"
cl /nologo /EHsc /std:c++20 /utf-8 /Zc:__cplusplus /W4 /Zi /MD "%SRC%" /Fe:"%NAME%.exe"
set "RC=%ERRORLEVEL%"
popd

exit /b %RC%

:usage
echo [build] usage: build-any.cmd ^<source.cpp^> [output-dir]
exit /b 1

:novs
echo [build] cannot find the Visual Studio build environment:
echo         %VCVARS%
exit /b 1
