#pragma once
#define GLFW_INCLUDE_NONE
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

namespace OLE {
    class Window {
    public:
        Window(int, int, const char*);
        ~Window();
        bool shouldClose() const;
        SDL_Window* getWindow() {return window;};
        SDL_Event event;
    private:
        SDL_Window* window;
    };
};