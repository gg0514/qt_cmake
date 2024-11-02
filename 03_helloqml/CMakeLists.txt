cmake_minimum_required(VERSION 3.16)

project(helloqml VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_PREFIX_PATH C:/Qt/6.5.3/mingw_64)

find_package(Qt6 6.5 COMPONENTS Quick  REQUIRED)
qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(helloqmlapp
    main.cpp
)

qt_add_qml_module(helloqmlapp
    URI helloqml
    QML_FILES main.qml
)

target_link_libraries(helloqmlapp
    PRIVATE Qt6::Quick
)
