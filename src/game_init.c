#include "header.h"

SDL_Window *game_init(const char *title, const int width, const int height) {
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        printf("Subsustem initialized\n");

        SDL_Window *window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_ALLOW_HIGHDPI);

        if (window) printf("Window created\n");

        return window;
    }

    return NULL;
}