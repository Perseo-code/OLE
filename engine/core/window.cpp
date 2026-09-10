#include "window.hpp"
#include <stdexcept>
#include <cstdlib>
#include <iostream>
using namespace OLE; // So the code doesn't need to have OLE:: before the function's (or structure's) (or variable's) name

Window::Window(int width, int height, const char* title) { // We create the window using the Impl structure
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        SDL_Log("Couldn't intialize SDL. Error: %s",  SDL_GetError());
        SDL_Quit();
        throw std::runtime_error("Couldn't initialize SDL");
    }
    window = SDL_CreateWindow(title, width, height, SDL_WINDOW_RESIZABLE);
    if (!window) {
        SDL_Log("Couldn't initialize the window. Error: %s", SDL_GetError());
        SDL_Quit();
        throw std::runtime_error("Couldn't create the window");
    }
}

Window::~Window() // Window destroyer
{
    if (window) {
        SDL_DestroyWindow(window);
    }
}




bool Window::shouldClose() const {
    if (event.type == SDL_EVENT_QUIT) {
        return true;
    }
    return false;
}
