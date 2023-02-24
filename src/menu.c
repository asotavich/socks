#include "../inc/header.h"

int menu(const int width, const int height) {
    // Initialize SDL2
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        fprintf(stderr, "SDL_Init Error: %s\n", SDL_GetError());
        return 1;
    }
    
    // Create window and renderer
    SDL_Window *window = SDL_CreateWindow("Menu", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, 0);
    if (window == NULL) {
        fprintf(stderr, "SDL_CreateWindow Error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (renderer == NULL) {
        fprintf(stderr, "SDL_CreateRenderer Error: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // Load background image
    SDL_Surface *background_surface = IMG_Load("background_socks.png");
    if (background_surface == NULL) {
        fprintf(stderr, "IMG_Load Error: %s\n", IMG_GetError());
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    SDL_Texture *background_texture = SDL_CreateTextureFromSurface(renderer, background_surface);
    SDL_FreeSurface(background_surface);

    // RULES
    SDL_Surface *button_surface_RULES = IMG_Load("RULES.png");
    if (button_surface_RULES == NULL) {
        fprintf(stderr, "IMG_Load Error: %s\n", IMG_GetError());
        SDL_DestroyTexture(background_texture);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    SDL_Texture *button_texture_RULES = SDL_CreateTextureFromSurface(renderer, button_surface_RULES);
    SDL_FreeSurface(button_surface_RULES);

    // TEAM
    SDL_Surface *button_surface_TEAM = IMG_Load("TEAM.png");
    if (button_surface_TEAM == NULL) {
        fprintf(stderr, "IMG_Load Error: %s\n", IMG_GetError());
        SDL_DestroyTexture(background_texture);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    SDL_Texture *button_texture_TEAM = SDL_CreateTextureFromSurface(renderer, button_surface_TEAM);
    SDL_FreeSurface(button_surface_TEAM);

    //SOCKS
    SDL_Surface *button_surface_SOCKS = IMG_Load("SOCKS.png");
    if (button_surface_SOCKS == NULL) {
        fprintf(stderr, "IMG_Load Error: %s\n", IMG_GetError());
        SDL_DestroyTexture(background_texture);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    SDL_Texture *button_texture_SOCKS = SDL_CreateTextureFromSurface(renderer, button_surface_SOCKS); 
    SDL_FreeSurface(button_surface_SOCKS);

    //ROOMS
    SDL_Surface *button_surface_ROOMS = IMG_Load("ROOMS.png");
    if (button_surface_ROOMS == NULL) {
        fprintf(stderr, "IMG_Load Error: %s\n", IMG_GetError());
        SDL_DestroyTexture(background_texture);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    SDL_Texture *button_texture_ROOMS = SDL_CreateTextureFromSurface(renderer, button_surface_ROOMS);
    SDL_FreeSurface(button_surface_ROOMS);


    // PLAY
    SDL_Surface *button_surface_PLAY = IMG_Load("PLAY.png");
    if (button_surface_PLAY == NULL) {
        fprintf(stderr, "IMG_Load Error: %s\n", IMG_GetError());
        SDL_DestroyTexture(background_texture);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    SDL_Texture *button_texture_PLAY = SDL_CreateTextureFromSurface(renderer, button_surface_PLAY);
    SDL_FreeSurface(button_surface_PLAY);


    //EXIT
    SDL_Surface *button_surface_EXIT = IMG_Load("Exit.png");
    if (button_surface_EXIT == NULL) {
        fprintf(stderr, "IMG_Load Error: %s\n", IMG_GetError());
        SDL_DestroyTexture(background_texture);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    SDL_Texture *button_texture_EXIT = SDL_CreateTextureFromSurface(renderer, button_surface_EXIT);
    SDL_FreeSurface(button_surface_EXIT);
    
    //HELP
    SDL_Surface *button_surface_HELP = IMG_Load("HELP.png");
        if (button_surface_HELP == NULL) {
        fprintf(stderr, "IMG_Load Error: %s\n", IMG_GetError());
        SDL_DestroyTexture(background_texture);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }
    SDL_Texture *button_texture_HELP = SDL_CreateTextureFromSurface(renderer, button_surface_HELP);
    SDL_FreeSurface(button_surface_HELP);




    // Render background and buttons
    SDL_RenderCopy(renderer, background_texture, NULL, NULL);

    SDL_Rect button_RULES;
    button_RULES.x = 100;
    button_RULES.y = 115;
    button_RULES.w = 180;
    button_RULES.h = 47;

    SDL_RenderCopy(renderer, button_texture_RULES, NULL, &button_RULES);

    SDL_Rect button_TEAM;
    button_TEAM.x = 100;
    button_TEAM.y = 487;
    button_TEAM.w = 180;
    button_TEAM.h = 47;

    SDL_RenderCopy(renderer, button_texture_TEAM, NULL, &button_TEAM);

    SDL_Rect button_SOCKS;
    button_SOCKS.x = 520;
    button_SOCKS.y = 487;
    button_SOCKS.w = 180;
    button_SOCKS.h = 47;

    SDL_RenderCopy(renderer, button_texture_SOCKS, NULL, &button_SOCKS);


    SDL_Rect button_ROOMS;
    button_ROOMS.x = 520;
    button_ROOMS.y = 115;
    button_ROOMS.w = 180;
    button_ROOMS.h = 47;

    SDL_RenderCopy(renderer, button_texture_ROOMS, NULL, &button_ROOMS);


    SDL_Rect button_PLAY;
    button_PLAY.x = 300;
    button_PLAY.y = 277;
    button_PLAY.w = 200;
    button_PLAY.h = 96;

    SDL_RenderCopy(renderer, button_texture_PLAY, NULL, &button_PLAY);



    SDL_Rect button_EXIT;
    button_EXIT.x = 15;
    button_EXIT.y = 13;
    button_EXIT.w = 64;
    button_EXIT.h = 16;

    SDL_RenderCopy(renderer, button_texture_EXIT, NULL, &button_EXIT);
    
    SDL_Rect button_HELP;
    button_HELP.x = 741;
    button_HELP.y = 8;
    button_HELP.w = 50;
    button_HELP.h = 50;

    SDL_RenderCopy(renderer, button_texture_HELP, NULL, &button_HELP);




    SDL_RenderPresent(renderer);

    // Handle events
    SDL_Event event;
    int quit = 0,
        room = 0,
        sock = 0;
    while (!quit) {
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    quit = 1;
                    break;
                case SDL_MOUSEBUTTONDOWN:
                    if (SDL_PointInRect(&(SDL_Point){event.button.x, event.button.y}, &button_RULES)) {
                        printf("Button RULES clicked!\n");
                        rules(width, height);
                    }
                    if (SDL_PointInRect(&(SDL_Point){event.button.x, event.button.y}, &button_TEAM)) {
                        printf("Button TEAM clicked!\n");
                        team(width, height);
                    }
                    if (SDL_PointInRect(&(SDL_Point){event.button.x, event.button.y}, &button_SOCKS)) {
                        printf("Button SOCKS clicked!\n");
                        sock = socks(width, height);
                    }
                    if (SDL_PointInRect(&(SDL_Point){event.button.x, event.button.y}, &button_ROOMS)) {
                        printf("Button ROOMS clicked!\n");
                        room = rooms(width, height);
                    }
                    if (SDL_PointInRect(&(SDL_Point){event.button.x, event.button.y}, &button_PLAY)) {
                        printf("Button PLAY clicked!\n");
                        switch (room) {
                            case 0:
                                living_room(width, height);
                                break;
                            case 1:
                                kitchen(width, height);
                                break;
                            case 2:
                                bath(width, height);
                                break;
                            default:
                                break;
                        }
                    }
                    if (SDL_PointInRect(&(SDL_Point){event.button.x, event.button.y}, &button_HELP)) {
                        printf("Button HELP clicked!\n");
                    }
                    if (SDL_PointInRect(&(SDL_Point){event.button.x, event.button.y}, &button_EXIT)) {
                        printf("Button EXIT clicked!\n");
                        quit = 1;
                    }
                    break;
                default:
                    break;
            }
        }

    // Render background and buttons

        SDL_SetRenderDrawColor(renderer, 5, 32, 73, 1);
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, background_texture, NULL, NULL);

        SDL_RenderCopy(renderer, button_texture_RULES, NULL, &button_RULES);
        SDL_RenderCopy(renderer, button_texture_TEAM, NULL, &button_TEAM);
        SDL_RenderCopy(renderer, button_texture_SOCKS, NULL, &button_SOCKS);
        SDL_RenderCopy(renderer, button_texture_ROOMS, NULL, &button_ROOMS);
        SDL_RenderCopy(renderer, button_texture_PLAY, NULL, &button_PLAY);
        SDL_RenderCopy(renderer, button_texture_EXIT, NULL, &button_EXIT);
        SDL_RenderCopy(renderer, button_texture_HELP, NULL, &button_HELP);
        SDL_RenderPresent(renderer);
    }

    // Cleanup and exit
    SDL_DestroyTexture(button_texture_RULES);
    SDL_DestroyTexture(button_texture_TEAM);
    SDL_DestroyTexture(button_texture_SOCKS);
    SDL_DestroyTexture(button_texture_ROOMS);
    SDL_DestroyTexture(button_texture_PLAY);
    SDL_DestroyTexture(button_texture_EXIT);
    SDL_DestroyTexture(button_texture_HELP);
    SDL_DestroyTexture(background_texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    SDL_Quit();

    return 0;
}
