@echo off
echo Compiling with g++...
g++ main.cpp src/resistor.cpp -Iinclude -o resistor.exe
if %errorlevel% equ 0 (
    echo Compilation successful!
    echo Running program...
    resistor.exe
) else (
    echo Compilation failed!
)
pause