cmake_minimum_required(VERSION 3.16)

project(CalculaorApp VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Подключаем Qt Widgets и Qt Test
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Test)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Test)

# --- Основные исходники приложения ---
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    calculator.cpp
    calculator.h
)

# --- Основное приложение ---
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(CalculaorApp
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    add_executable(CalculaorApp ${PROJECT_SOURCES})
endif()

target_link_libraries(CalculaorApp PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

if(${QT_VERSION} VERSION_LESS 6.1.0)
    set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.CalculaorApp)
endif()

set_target_properties(CalculaorApp PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS CalculaorApp
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(CalculaorApp)
endif()

# --- Тесты калькулятора ---
add_executable(test_calculator
    test_calculator.cpp
    calculator.cpp
    calculator.h
)

target_link_libraries(test_calculator Qt${QT_VERSION_MAJOR}::Test)