cmake_minimum_required(VERSION 3.16)
project(HelloQML VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find necessary Qt6 Quick modules
find_package(Qt6 COMPONENTS Quick REQUIRED)
qt_standard_project_setup(REQUIRES 6.5)

# Define the C++ entry execution binary
qt_add_executable(appHelloQML main.cpp)

# Define the QML Module. This compiles the QML  into binary resources.
qt_add_qml_module(appHelloQML
    URI MainModule
    VERSION 1.0
    QML_FILES main.qml
)

target_link_libraries(appHelloQML PRIVATE Qt6::Quick)
