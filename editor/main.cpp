#include "core/window.hpp"

int main() {
    OLE::Window window(1280, 720, "Test");

    while (!window.shouldClose()) {
        window.update();
    }

    return 0;
}