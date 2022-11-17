#include "appli_sdl.hpp"

void init_fenetre(int ac, char** av)
{
	SDL_Window* window = NULL;
	int x = 0;
	int y = 0;

	window = SDL_CreateWindow("Application bebe", x, y, 800, 600, SDL_WINDOW_SHOWN);
	SDL_Delay(3000);
	SDL_DestroyWindow(window);
	SDL_Quit();
}