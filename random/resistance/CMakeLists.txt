cmake_minimum_required(VERSION 4.2)

project(resistance
LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(SOURCES
    ${PROJECT_SOURCE_DIR}/src/resistor.cpp
    ${PROJECT_SOURCE_DIR}/main.cpp
)

add_executable(resistance ${SOURCES})

set_target_properties(resistance PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin
)

target_link_libraries(resistance )

message(STATUS "C++ Compiler: ${CMAKE_CXX_COMPILER}")
message(STATUS "Source files: ${SOURCES}")

add_custom_target(run
    COMMAND ${CMAKE_BINARY_DIR}/bin/${PROJECT_NAME}
    DEPENDS resistance
    COMMENT "Running ResistorCalculator..."
)
