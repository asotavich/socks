#include "../inc/header.h"

int rooms(const int width, const int height) {
    int room = 0;

    SDL_Window *window = game_init("Our game", width, height);
    if (window == NULL) SDL_Quit();

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
    
    SDL_Rect rect_rooms_name = {310, 40, 180, 48};
    SDL_Rect rect_button_rooms = {325, 48, 150, 48};
    SDL_Rect rect_living_room = {50, 128, 300, 225};
    SDL_Rect rect_kitchen = {450, 128, 300, 225};
    SDL_Rect rect_bath = {250, 377, 300, 225};

    SDL_Texture *tex_background = IMG_LoadTexture(renderer, "images/background_socks.png");
    if (!tex_background) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_rooms_name = IMG_LoadTexture(renderer, "images/rooms_name.png");
    if (!tex_rooms_name) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_button_rooms = IMG_LoadTexture(renderer, "images/button_rooms.png");
    if (!tex_button_rooms) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_living_room = IMG_LoadTexture(renderer, "images/living_room.png");
    if (!tex_living_room) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_kitchen = IMG_LoadTexture(renderer, "images/kitchen.png");
    if (!tex_kitchen) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_bath = IMG_LoadTexture(renderer, "images/bath.png");
    if (!tex_bath) printf("%s\n", SDL_GetError());
    
    double time;

    SDL_Event e;
    bool run = true;
    
    while (run) {
        time = SDL_GetTicks();
        if (time > 10000) break;

        if (SDL_PollEvent(&e)) {
            switch (e.type) {
                case SDL_QUIT:
                    run = false;
                    break;
                case SDL_MOUSEBUTTONDOWN:
                    if (SDL_PointInRect(&(SDL_Point){e.button.x, e.button.y}, &rect_living_room)) {
                        room = 0;
                    }
                    if (SDL_PointInRect(&(SDL_Point){e.button.x, e.button.y}, &rect_kitchen)) {
                        room = 1;
                    }
                    if (SDL_PointInRect(&(SDL_Point){e.button.x, e.button.y}, &rect_bath)) {
                        room = 2;
                    }
            }
        }

        SDL_SetRenderDrawColor(renderer, 5, 32, 73, 1);
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, tex_background, NULL, NULL);
        SDL_RenderCopy(renderer, tex_rooms_name, NULL, &rect_rooms_name);
        SDL_RenderCopy(renderer, tex_button_rooms, NULL, &rect_button_rooms);
        SDL_RenderCopy(renderer, tex_living_room, NULL, &rect_living_room);
        SDL_RenderCopy(renderer, tex_kitchen, NULL, &rect_kitchen);
        SDL_RenderCopy(renderer, tex_bath, NULL, &rect_bath);
        SDL_RenderPresent(renderer);
    }
    
    SDL_DestroyWindow(window);
    SDL_Quit();

    return room;
}