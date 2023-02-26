#include "../inc/header.h"

void prehistory(const int width, const int height) {
    SDL_Window *window = game_init("Our game", width, height);
    if (window == NULL) SDL_Quit();

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

    /*if (IMG_Init(IMG_INIT_PNG) != IMG_INIT_PNG) {
    printf("Error initializing SDL2_image: %s\n", IMG_GetError());
    }*/
    
    SDL_Rect rect_prehistory = {106, 123, 588, 404};

    SDL_Texture *tex_prehistory = IMG_LoadTexture(renderer, "resource/images_b/prehistory.png");
    if (!tex_prehistory) printf("%s\n", SDL_GetError());

    double time = SDL_GetTicks();

    //int x, y;

    SDL_Event e;
    bool run = true;
    
    while (run) {
        time = SDL_GetTicks();

        if (time > 7000) break;

        if (SDL_PollEvent(&e)) {
            switch (e.type) {
                case SDL_KEYDOWN:
                    SDL_Log("User just pressed down a key!");
                    break;
                case SDL_QUIT:
                    run = false;
                    break;
            }
        }

        SDL_SetRenderDrawColor(renderer, 5, 32, 73, 1);
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, tex_prehistory, NULL, &rect_prehistory);
        SDL_RenderPresent(renderer);
    }
    menu(width, height);
    
    SDL_DestroyWindow(window);
    SDL_Quit();
}
