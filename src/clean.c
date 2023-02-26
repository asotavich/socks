#include "../inc/header.h"

void clean(SDL_Window *window, SDL_Renderer *renderer) {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	printf("Game Cleaned\n");
}
