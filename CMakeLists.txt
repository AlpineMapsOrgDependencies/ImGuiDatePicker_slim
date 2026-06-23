cmake_minimum_required(VERSION 3.10)

project(ImGuiDatePicker)

add_library(ImGuiDatePicker STATIC
    ImGuiDatePicker.cpp
    ImGuiDatePicker.hpp
)

target_include_directories(ImGuiDatePicker PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

if(UNIX)
    target_compile_options(ImGuiDatePicker PUBLIC -Wno-unknown-pragmas)
endif()
