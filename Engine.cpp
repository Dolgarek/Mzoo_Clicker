#include "Engine.hpp"

Engine::Engine() {

}

Engine::~Engine() {

}

void Engine::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
	int flags = 0;
	if (fullscreen) {
		flags = SDL_WINDOW_FULLSCREEN;
	}
	
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "Engine started!" << std::endl;
		
		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window) {
			std::cout << "Window created!" << std::endl;
		}

		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer) {
			std::cout << "Renderer created!" << std::endl;
		}

		isRunning = true;

	}
	else {
		isRunning = false;
		std::cout << "Error engine crashed" << std::endl;
	}
}

void Engine::handleEvent()
{
}

void Engine::update()
{
}

void Engine::render()
{
}

void Engine::clean()
{
}

bool Engine::running()
{
	return isRunning;
}
