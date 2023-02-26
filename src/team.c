#include "../inc/header.h"

void team(const int width, const int height) {
    SDL_Window *window = game_init("Our game", width, height);
    if (window == NULL) SDL_Quit();

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

    SDL_Rect rect_team_name = {310, 40, 180, 48};
    SDL_Rect rect_back = {12, 12, 64, 16};
    SDL_Rect rect_our_team = {61, 161, 719, 411};

    SDL_Texture *tex_background = IMG_LoadTexture(renderer, "resource/images_b/background_socks.png");
    if (!tex_background) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_team_name = IMG_LoadTexture(renderer, "resource/images_b/team_name.png");
    if (!tex_team_name) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_back = IMG_LoadTexture(renderer, "resource/im/general/Back.png");
    if (!tex_back) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_our_team = IMG_LoadTexture(renderer, "resource/im/general/our_team.png");
    if (!tex_our_team) printf("%s\n", SDL_GetError());

    SDL_Event e;
    bool run = true;
    
    while (run) {

        if (SDL_PollEvent(&e)) {
            switch (e.type) {
                case SDL_KEYDOWN:
                    SDL_Log("User just pressed down a key!");
                    break;
                case SDL_QUIT:
                    run = false;
                    break;
                case SDL_MOUSEBUTTONDOWN:
                    if (SDL_PointInRect(&(SDL_Point){e.button.x, e.button.y}, &rect_back)) {
                        printf("Button RULES clicked!\n");
                        menu(width, height);
                        run = false;
                    }
            }
        }

        

        SDL_SetRenderDrawColor(renderer, 5, 32, 73, 1);
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, tex_background, NULL, NULL);
        SDL_RenderCopy(renderer, tex_team_name, NULL, &rect_team_name);
        SDL_RenderCopy(renderer, tex_back, NULL, &rect_back);
        SDL_RenderCopy(renderer, tex_our_team, NULL, &rect_our_team);
        SDL_RenderPresent(renderer);
    }
    
    SDL_DestroyWindow(window);
    SDL_Quit();
}
