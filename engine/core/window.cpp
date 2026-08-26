#include "window.hpp"
#include <stdexcept>
#include <stdlib.h>
using namespace OLE; // So the code doesn't need to have OLE:: before the function's (or structure's) (or variable's) name
struct Window::Impl {
    GLFWwindow* window;
};

Window::Window(int width, int height, const char* title) { // We create the window using the Impl structure
    impl = new Impl;
    if (!glfwInit())
        throw std::runtime_error("Couldn't initialize GLFW");

    impl->window = glfwCreateWindow(width, height, title, nullptr, nullptr);
    if (!impl->window) {
        glfwTerminate();
        throw std::runtime_error("Unable to create window");
    }

    glfwMakeContextCurrent(impl->window);
}

Window::~Window() // Window destroyer
{
    if (impl->window)
        glfwDestroyWindow(impl->window);
    
    glfwTerminate();

    delete impl;
}

void Window::update() { // Updates the window (Will use with the renderer)
    glfwSwapBuffers(impl->window);
    glfwPollEvents();
}

bool Window::shouldClose() const {
    return glfwWindowShouldClose(impl->window); // Returns true if the user wants to close the window
}