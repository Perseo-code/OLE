#pragma once
#include "core/window.hpp"
namespace OLE {
    class Renderer {
    private:
        OLE::Window& window;
        SDL_Renderer* renderer;
    public:
        Renderer(OLE::Window&);
        ~Renderer() {
            if (renderer) {
                SDL_DestroyRenderer(renderer);
            }
        }

        void render();
        void clear();
        void update();
    };
};