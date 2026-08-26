#pragma once
#include "core/window.hpp"
#include <GLFW/glfw3.h>
#include <glad/gl.h>
namespace OLE {
    class Renderer {
    private:
        OLE::Window& window;
    public:
        Renderer(OLE::Window&);
        void clear();
    };
};