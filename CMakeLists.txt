cmake_minimum_required(VERSION 3.23)
project(mod37_3)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/usr/local")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(mod37_3 main.cpp tv_remote_control.cpp tv_remote_control.h tv_remote_control.ui tv_remote_control.cpp tv_remote_control.h tv_remote_control.ui)
target_link_libraries(mod37_3
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

