cmake_minimum_required(VERSION 3.16)

project(helloworld VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_PREFIX_PATH C:/Qt/6.5.3/mingw_64)


find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(helloworld
    main.cpp
)

target_link_libraries(helloworld
    PRIVATE Qt6::Core
)

