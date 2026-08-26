#pragma once
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
namespace OLE {
    class Window {
    public:
        Window(int, int, const char*);
        ~Window();

        void update();
        bool shouldClose() const;
    private:
        struct Impl;
        Impl* impl;
    };
};