#include "../inc/header.h"

void rules(const int width, const int height) {
    SDL_Window *window = game_init("Our game", width, height);
    if (window == NULL) SDL_Quit();

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
    
    SDL_Rect rect_rules_name = {310, 40, 180, 48};
    SDL_Rect rect_rules = {24, 117, 756, 510};

    SDL_Texture *tex_rules_name = IMG_LoadTexture(renderer, "images/rules_name.png");
    if (!tex_rules_name) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_rules = IMG_LoadTexture(renderer, "images/rules.png");
    if (!tex_rules) printf("%s\n", SDL_GetError());

    double time;

    SDL_Event e;
    bool run = true;
    
    while (run) {
        time = SDL_GetTicks();

        if (SDL_PollEvent(&e)) {
            switch (e.type) {
                case SDL_QUIT:
                    run = false;
                    break;
                /*case SDL_MOUSEBUTTONDOWN:
                    if (SDL_PointInRect(&(SDL_Point){event.button.x, event.button.y}, &button_RULES)) {
                        printf("Button RULES clicked!\n");
                        rules(width, height);
                    }*/
            }
        }

        SDL_SetRenderDrawColor(renderer, 5, 32, 73, 1);
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, tex_rules_name, NULL, &rect_rules_name);
        SDL_RenderCopy(renderer, tex_rules, NULL, &rect_rules);
        SDL_RenderPresent(renderer);
    }
    
    SDL_DestroyWindow(window);
    SDL_Quit();
}