#include "renderer.hpp"
#include <stdexcept>
using namespace OLE;

Renderer::Renderer(Window& window) : window(window) {
    renderer = SDL_CreateRenderer(window.getWindow(), NULL);
    if (!renderer) {
        SDL_Log("Couldn't create the renderer. Error: %s", SDL_GetError());
        SDL_Quit();
        throw std::runtime_error("Couldn't create the renderer.");
    }
}

void Renderer::render() {
    SDL_RenderPresent(renderer);
    SDL_PollEvent(&window.event);
}

void Renderer::clear() {
    SDL_RenderClear(renderer);    
}

void Renderer::update() {
    clear();
    render();
}