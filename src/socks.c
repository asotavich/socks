#include "../inc/header.h"

int socks(const int width, const int height) {
    int sock = 0;

    SDL_Window *window = game_init("Our game", width, height);
    if (window == NULL) SDL_Quit();

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
    
    SDL_Rect rect_socks = {310, 40, 180, 48};
    SDL_Rect rect_rope = {0, 156, 800, 232};
    SDL_Rect rect_ucode_sock = {206, 164, 70, 103};
    SDL_Rect rect_free_sock = {534, 164, 70, 103};
    SDL_Rect rect_wine_sock = {206, 400, 70, 103};
    SDL_Rect rect_binary_sock = {534, 400, 70, 103};
    SDL_Rect rect_clothes_pin_1 = {217, 141, 9, 29};
    SDL_Rect rect_clothes_pin_2 = {549, 141, 9, 29};
    SDL_Rect rect_clothes_pin_3 = {217, 378, 9, 29};
    SDL_Rect rect_clothes_pin_4 = {549, 378, 9, 29};
    SDL_Rect rect_ucode_sock_name = {156, 273, 171, 24};
    SDL_Rect rect_free_sock_name = {484, 273, 171, 24};
    SDL_Rect rect_wine_sock_name = {156, 509, 171, 24};
    SDL_Rect rect_binary_sock_name = {490, 509, 171, 24};

    SDL_Texture *tex_socks = IMG_LoadTexture(renderer, "resource/images_b/socks.png");
    if (!tex_socks) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_rope = IMG_LoadTexture(renderer, "resource/images_b/rope.png");
    if (!tex_rope) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_ucode_sock = IMG_LoadTexture(renderer, "resource/images_b/ucode_sock.png");
    if (!tex_ucode_sock) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_free_sock = IMG_LoadTexture(renderer, "resource/images_b/free_sock.png");
    if (!tex_free_sock) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_wine_sock = IMG_LoadTexture(renderer, "resource/images_b/wine_sock.png");
    if (!tex_wine_sock) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_binary_sock = IMG_LoadTexture(renderer, "resource/images_b/binary_sock.png");
    if (!tex_binary_sock) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_clothes_pin = IMG_LoadTexture(renderer, "resource/images_b/clothes_pin.png");
    if (!tex_clothes_pin) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_ucode_sock_name = IMG_LoadTexture(renderer, "resource/images_b/ucode_sock_name.png");
    if (!tex_ucode_sock_name) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_free_sock_name = IMG_LoadTexture(renderer, "resource/images_b/free_sock_name.png");
    if (!tex_free_sock_name) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_wine_sock_name = IMG_LoadTexture(renderer, "resource/images_b/wine_sock_name.png");
    if (!tex_wine_sock_name) printf("%s\n", SDL_GetError());

    SDL_Texture *tex_binary_sock_name = IMG_LoadTexture(renderer, "resource/images_b/binary_sock_name.png");
    if (!tex_binary_sock_name) printf("%s\n", SDL_GetError());

    //int x, y;

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
                    printf("mouse button down\n");
                    if (SDL_PointInRect(&(SDL_Point){e.button.x, e.button.y}, &rect_ucode_sock)) {
                        sock = 0;
                        run = false;
                        printf("room = %d\n", sock);
                        break;
                    }
                    if (SDL_PointInRect(&(SDL_Point){e.button.x, e.button.y}, &rect_free_sock)) {
                        sock = 1;
                        run = false;
                        printf("room = %d\n", sock);
                        break;
                    }
                    if (SDL_PointInRect(&(SDL_Point){e.button.x, e.button.y}, &rect_wine_sock)) {
                        sock = 2;
                        run = false;
                        printf("room = %d\n", sock);
                        break;
                    }
                    if (SDL_PointInRect(&(SDL_Point){e.button.x, e.button.y}, &rect_binary_sock)) {
                        sock = 3;
                        run = false;
                        printf("room = %d\n", sock);
                        break;
                    }
            }
        }

        SDL_SetRenderDrawColor(renderer, 5, 32, 73, 1);
        SDL_RenderClear(renderer);
        //SDL_RenderCopy(renderer, tex_background, NULL, NULL);
        SDL_RenderCopy(renderer, tex_socks, NULL, &rect_socks);
        SDL_RenderCopy(renderer, tex_rope, NULL, &rect_rope);
        SDL_RenderCopy(renderer, tex_ucode_sock, NULL, &rect_ucode_sock);
        SDL_RenderCopy(renderer, tex_free_sock, NULL, &rect_free_sock);
        SDL_RenderCopy(renderer, tex_wine_sock, NULL, &rect_wine_sock);
        SDL_RenderCopy(renderer, tex_binary_sock, NULL, &rect_binary_sock);
        SDL_RenderCopy(renderer, tex_clothes_pin, NULL, &rect_clothes_pin_1);
        SDL_RenderCopy(renderer, tex_clothes_pin, NULL, &rect_clothes_pin_2);
        SDL_RenderCopy(renderer, tex_clothes_pin, NULL, &rect_clothes_pin_3);
        SDL_RenderCopy(renderer, tex_clothes_pin, NULL, &rect_clothes_pin_4);
        SDL_RenderCopy(renderer, tex_ucode_sock_name, NULL, &rect_ucode_sock_name);
        SDL_RenderCopy(renderer, tex_free_sock_name, NULL, &rect_free_sock_name);
        SDL_RenderCopy(renderer, tex_wine_sock_name, NULL, &rect_wine_sock_name);
        SDL_RenderCopy(renderer, tex_binary_sock_name, NULL, &rect_binary_sock_name);
        SDL_RenderPresent(renderer);
    }
    
    SDL_DestroyWindow(window);
    SDL_Quit();

    return sock;
}
