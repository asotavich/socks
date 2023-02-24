#include "../inc/header.h"

void win(const int width, const int height) {
    SDL_Window *window = game_init("Our game", width, height);
    if (window == NULL) SDL_Quit();

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
    
    SDL_Rect rect_success = {250, 150, 300, 96};
    SDL_Rect rect_cup = {250, 254, 300, 250};

    SDL_Texture *tex_background = IMG_LoadTexture(renderer, "images/background_socks.png");
    if (!tex_background) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_success = IMG_LoadTexture(renderer, "images/success.png");
    if (!tex_success) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_cup = IMG_LoadTexture(renderer, "images/cup.png");
    if (!tex_cup) printf("%s\n", SDL_GetError());
    
    double time;
    
    //int x, y;

    SDL_Event e;
    bool run = true;
    char letters[100];
    //int count = 0;
    
    while (run) {
        //delta = (SDL_GetTicks() - time2) / 1000;
        time = SDL_GetTicks();
        //if (time > 10000) break;

        if (SDL_PollEvent(&e)) {
            switch (e.type) {
                case SDL_KEYDOWN:
                    SDL_Log("User just pressed down a key!");
                    //count = keydown(e, letters);
                    break;
                case SDL_QUIT:
                    run = false;
                    break;
                case SDL_MOUSEMOTION:
                    /*SDL_GetMouseState(&x, &y);
                    printf("%d : %d\n", x, y);*/
                    break;
            }
        }

        SDL_SetRenderDrawColor(renderer, 5, 32, 73, 1);
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, tex_background, NULL, NULL);
        SDL_RenderCopy(renderer, tex_success, NULL, &rect_success);
        SDL_RenderCopy(renderer, tex_cup, NULL, &rect_cup);
        SDL_RenderPresent(renderer);
    }

    //printf("%s\n", letters);
    /*for (int i = 0; i < count; i++)
        printf("%c\n", letters[i]);*/
    
    SDL_DestroyWindow(window);
    SDL_Quit();
}