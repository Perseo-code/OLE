#include "renderer.hpp"
#include <stdexcept>
using namespace OLE;

Renderer::Renderer(Window& window) : window(window) {
    if (!gladLoadGL(reinterpret_cast<GLADloadfunc>(glfwGetProcAddress)))
        throw std::runtime_error("Failed to initialize GLAD");
}

void Renderer::clear() {
    glClearColor(0.1f, 0.1f, 0.15f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}