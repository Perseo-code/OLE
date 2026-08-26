cmake_minimum_required(VERSION 3.20)

project(OLE
    VERSION 0.1.0
    LANGUAGES C CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# =========================
# Engine
# =========================

add_library(ole_engine
    engine/core/window.cpp
    engine/renderer/renderer.cpp
    engine/renderer/glad/src/gl.c
)

target_include_directories(ole_engine
    PUBLIC
        engine
        engine/renderer/glad/include
)

# =========================
# Dependencies
# =========================

find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

target_link_libraries(ole_engine
    PUBLIC
        glfw
        OpenGL::GL
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