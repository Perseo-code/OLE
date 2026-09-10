#include "core/window.hpp"
#include "renderer/renderer.hpp"
int main() {
    OLE::Window window(1280, 720, "Test");
    OLE::Renderer renderer(window);
    while (!window.shouldClose()) {
        renderer.update();
    }

    return 0;
}