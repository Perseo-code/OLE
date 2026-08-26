cmake_minimum_required(VERSION 3.20)

project(OLE
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# =========================
# Engine
# =========================

add_library(ole_engine
    engine/core/window.cpp
)

target_include_directories(ole_engine
    PUBLIC
        engine
)

# =========================
# Dependencies
# =========================

find_package(glfw3 REQUIRED)

target_link_libraries(ole_engine
    PUBLIC
        glfw
)

# =========================
# Editor
# =========================

add_executable(ole_editor
    editor/main.cpp
)

target_link_libraries(ole_editor
    PRIVATE
        ole_engine
)