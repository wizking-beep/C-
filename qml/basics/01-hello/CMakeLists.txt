cmake_minimum_required(VERSION 3.21)

project(HelloQml LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS
    Quick
)

qt_standard_project_setup(REQUIRES 6.11)

qt_add_executable(appHello
    main.cpp
)

qt_add_qml_module(appHello
    URI Hello
    VERSION 1.0
    QML_FILES
        Main.qml
)

target_link_libraries(appHello
    PRIVATE Qt6::Quick
)