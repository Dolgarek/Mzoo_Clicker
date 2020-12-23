#pragma once

#include <stdio.h>
#include <iostream>
#include <SDL.h>

class Engine
{
public:
	Engine();
	~Engine();
	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	
	void handleEvent();
	void update();
	void render();
	void clean();

	bool running();

private:

	bool isRunning;
	SDL_Window *window;
	SDL_Renderer *renderer;


};

