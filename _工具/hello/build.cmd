@echo off
rem ============================================================
rem  build.cmd - compile one C++ source file with MSVC x64
rem
rem  Usage : build.cmd <source.cpp> [more.cpp ...]
rem  Output: <project>\bin\<source name>.exe (+ .pdb, .obj)
rem ============================================================
setlocal

set "ROOT=%~dp0"
set "VSROOT=C:\Program Files\Microsoft Visual Studio\18\Community"
set "VCVARS=%VSROOT%\VC\Auxiliary\Build\vcvars64.bat"
set "OUTDIR=%ROOT%bin"

if "%~1"=="" goto :usage
if not exist "%VCVARS%" goto :novs

rem load the MSVC compiler / Windows SDK environment
call "%VCVARS%" >nul
if errorlevel 1 goto :novs

set "SRC=%~f1"
for %%F in ("%SRC%") do set "NAME=%%~nF"

if not exist "%OUTDIR%" mkdir "%OUTDIR%"

rem build inside bin so .obj/.pdb land there too
pushd "%OUTDIR%"
cl /nologo /EHsc /std:c++20 /utf-8 /Zc:__cplusplus /W4 /Zi /MD "%SRC%" /Fe:"%NAME%.exe"
set "RC=%ERRORLEVEL%"
popd

exit /b %RC%

:usage
echo [build] usage: build.cmd ^<source.cpp^>
exit /b 1

:novs
echo [build] cannot find the Visual Studio build environment:
echo         %VCVARS%
exit /b 1
