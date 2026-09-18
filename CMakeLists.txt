cmake_minimum_required(VERSION 3.10.0)
project(MinatureDatabaseEngine)
set(CMAKE_CXX_STANDARD 17)

add_executable(MinatureDatabaseEngine
    src/main.cpp
    src/ReadFile.cpp
    src/Write&Read.cpp

)

include(CTest)
enable_testing()
target_include_directories(MinatureDatabaseEngine PRIVATE include)
