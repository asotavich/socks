#include "../inc/header.h"

bool IsRunning_help_kitchen;

SDL_Window *window_help_kitchen;  
SDL_Renderer *renderer_help_kitchen;

SDL_Texture *tex_help_kitchen;
SDL_Rect rect_help_kitchen;

SDL_Texture *tex_exit_kitchen;
SDL_Rect rect_exit_kitchen;

void init_help_kitchen(const char *title, int x, int y, int width, int height) {
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        printf("Sybsystems Initialised Successfully\n");
	window_help_kitchen = SDL_CreateWindow(title, x, y, width, height, 0);
	if (window_help_kitchen) {
        printf("Window created successfully\n");
	}
	renderer_help_kitchen = SDL_CreateRenderer(window_help_kitchen, -1, 0);
	SDL_SetRenderDrawColor(renderer_help_kitchen, 255, 255, 255, 255);
	if (renderer_help_kitchen) {
        printf("Renderer created successfully\n");
	}
	IsRunning_help_kitchen = true;
    }
    
    rect_help_kitchen.w = 800;
    rect_help_kitchen.h = 655;
    tex_help_kitchen = IMG_LoadTexture(renderer_help_kitchen, "resource/im/general/help_kitchen.png");
    if (!tex_help_kitchen)
        printf("%s\n", SDL_GetError());
    
    rect_exit_kitchen.x = 722;
    rect_exit_kitchen.y = 19;    
    rect_exit_kitchen.w = 64;
    rect_exit_kitchen.h = 16;
    tex_exit_kitchen = IMG_LoadTexture(renderer_help_kitchen, "resource/im/general/exit.png");
    if (!tex_exit_kitchen)
        printf("%s\n", SDL_GetError()); 
}

void render_help_kitchen(void) {
    SDL_RenderClear(renderer_help_kitchen);  
    SDL_RenderCopy(renderer_help_kitchen, tex_help_kitchen, NULL, &rect_help_kitchen);
    SDL_RenderCopy(renderer_help_kitchen, tex_exit_kitchen, NULL, &rect_exit_kitchen);
    SDL_RenderPresent(renderer_help_kitchen);
}

void help_kitchen(const int width, const int height) {
    init_help_kitchen("Help. Kitchen", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height);
    
    while (IsRunning_help_kitchen) {
        SDL_Event event;
        SDL_PollEvent(&event);
        switch(event.type) {
                case SDL_QUIT:
                    IsRunning_help_kitchen = false;
                    break;
                case SDL_MOUSEBUTTONDOWN:
                    if (SDL_PointInRect(&(SDL_Point){event.button.x, event.button.y}, &rect_exit_kitchen)) {
                        help(width, height);
                        IsRunning_help_kitchen = false;
                        break;
                    }
                default:
                    break;
        }
        render_help_kitchen();
    }
    
    SDL_DestroyWindow(window_help_kitchen);
    SDL_DestroyRenderer(renderer_help_kitchen);
    SDL_Quit();
}
