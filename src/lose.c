#include "../inc/header.h"

void lose(const int width, const int height) {
    SDL_Window *window = game_init("Our game", width, height);
    if (window == NULL) SDL_Quit();

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
    
    SDL_Rect rect_fail = {250, 150, 300, 96};
    SDL_Rect rect_mark = {110, 282, 579, 53};

    SDL_Texture *tex_background = IMG_LoadTexture(renderer, "images/background_socks.png");
    if (!tex_background) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_fail = IMG_LoadTexture(renderer, "images/fail.png");
    if (!tex_fail) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_mark = IMG_LoadTexture(renderer, "images/mark.png");
    if (!tex_mark) printf("%s\n", SDL_GetError());
    
    double time;
    
    //int x, y;

    SDL_Event e;
    bool run = true;
    
    while (run) {
        //delta = (SDL_GetTicks() - time2) / 1000;
        time = SDL_GetTicks();
        //if (time > 10000) break;

        if (SDL_PollEvent(&e)) {
            switch (e.type) {
                case SDL_KEYDOWN:
                    SDL_Log("User just pressed down a key!");
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
        SDL_RenderCopy(renderer, tex_fail, NULL, &rect_fail);
        SDL_RenderCopy(renderer, tex_mark, NULL, &rect_mark);
        SDL_RenderPresent(renderer);
    }

    SDL_Delay(7000);
    SDL_DestroyWindow(window);
    SDL_Quit();
}