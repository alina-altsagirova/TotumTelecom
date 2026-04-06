cmake_minimum_required(VERSION 3.16)
project(MyQtApp VERSION 1.0 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
#set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_CURRENT_SOURCE_DIR}/forms)

find_package(Qt6 REQUIRED COMPONENTS Widgets Sql Charts)

add_executable(TotumTelecom
    main.cpp
    resources.qrc
    database/dbmanager.cpp
    ui/mainwindow.cpp
    ui/logindialog.cpp
    widgets/dashboard.cpp
    widgets/reports.cpp
)

target_link_libraries(TotumTelecom PRIVATE Qt6::Widgets Qt6::Sql  Qt6::Charts)