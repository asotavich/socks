#include "../inc/header.h"

void help(const int width, const int height) {
    SDL_Window *window = game_init("Our game", width, height);
    if (window == NULL) SDL_Quit();

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
    
    SDL_Rect rect_help_name = {310, 40, 180, 48};
    SDL_Rect rect_living_room = {204, 211, 391, 72};
    SDL_Rect rect_bath = {204, 313, 391, 72};
    SDL_Rect rect_kitchen = {204, 415, 391, 72};
    SDL_Rect rect_exit_help = {722, 19, 64, 16};

    SDL_Texture *tex_help_name = IMG_LoadTexture(renderer, "resource/im/general/help_name.png");
    if (!tex_help_name) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_living_room = IMG_LoadTexture(renderer, "resource/im/general/living_room.png");
    if (!tex_living_room) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_bath = IMG_LoadTexture(renderer, "resource/im/general/bath.png");
    if (!tex_bath) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_kitchen = IMG_LoadTexture(renderer, "resource/im/general/kitchen.png");
    if (!tex_kitchen) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_exit_help = IMG_LoadTexture(renderer, "resource/im/general/exit.png");
    if (!tex_exit_help) printf("%s\n", SDL_GetError());

    SDL_Event e;
    bool run = true;
    
    while (run) {
        if (SDL_PollEvent(&e)) {
            switch (e.type) {
                case SDL_QUIT:
                    run = false;
                    break;
                case SDL_MOUSEBUTTONDOWN:
                    if (SDL_PointInRect(&(SDL_Point){e.button.x, e.button.y}, &rect_bath)) {
                        help_bath(width, height);
                        run = false;
                    }
                    if (SDL_PointInRect(&(SDL_Point){e.button.x, e.button.y}, &rect_living_room)) {
                        help_living_room(width, height);
                        run = false;
                    }
                    if (SDL_PointInRect(&(SDL_Point){e.button.x, e.button.y}, &rect_kitchen)) {
                        help_kitchen(width, height);
                        run = false;
                    }
                    if (SDL_PointInRect(&(SDL_Point){e.button.x, e.button.y}, &rect_exit_help)) {
                        menu(width, height);
                        run = false;
                    }
            }
        }

        SDL_SetRenderDrawColor(renderer, 5, 32, 73, 1);
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, tex_help_name, NULL, &rect_help_name);
        SDL_RenderCopy(renderer, tex_living_room, NULL, &rect_living_room);
        SDL_RenderCopy(renderer, tex_bath, NULL, &rect_bath);
        SDL_RenderCopy(renderer, tex_kitchen, NULL, &rect_kitchen);
        SDL_RenderCopy(renderer, tex_exit_help, NULL, &rect_exit_help);
        SDL_RenderPresent(renderer);
    }
    
    SDL_DestroyWindow(window);
    SDL_Quit();
}

