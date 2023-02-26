#include "../inc/header.h"

bool IsRunning_help_living_room;

SDL_Window *window_help_living_room;  
SDL_Renderer *renderer_help_living_room;

SDL_Texture *tex_help_living_room;
SDL_Rect rect_help_living_room;

SDL_Texture *tex_exit_living_room;
SDL_Rect rect_exit_living_room;

void init_help_living_room(const char *title, int x, int y, int width, int height) {
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        printf("Sybsystems Initialised Successfully\n");
	window_help_living_room = SDL_CreateWindow(title, x, y, width, height, 0);
	if (window_help_living_room) {
        printf("Window created successfully\n");
	}
	renderer_help_living_room = SDL_CreateRenderer(window_help_living_room, -1, 0);
	SDL_SetRenderDrawColor(renderer_help_living_room, 255, 255, 255, 255);
	if (renderer_help_living_room) {
        printf("Renderer created successfully\n");
	}
	IsRunning_help_living_room = true;
    }
    
    rect_help_living_room.w = 800;
    rect_help_living_room.h = 655;
    tex_help_living_room = IMG_LoadTexture(renderer_help_living_room, "resource/im/general/help_living_room.png");
    if (!tex_help_living_room)
        printf("%s\n", SDL_GetError());
    
    rect_exit_living_room.x = 722;
    rect_exit_living_room.y = 19;    
    rect_exit_living_room.w = 64;
    rect_exit_living_room.h = 16;
    tex_exit_living_room = IMG_LoadTexture(renderer_help_living_room, "resource/im/general/exit.png");
    if (!tex_exit_living_room)
        printf("%s\n", SDL_GetError()); 
}

void render_help_living_room(void) {
    SDL_RenderClear(renderer_help_living_room);  
    SDL_RenderCopy(renderer_help_living_room, tex_help_living_room, NULL, &rect_help_living_room);
    SDL_RenderCopy(renderer_help_living_room, tex_exit_living_room, NULL, &rect_exit_living_room);
    SDL_RenderPresent(renderer_help_living_room);
}

void help_living_room(const int width, const int height) {
    init_help_living_room("Help. Kitchen", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height);
    
    while (IsRunning_help_living_room) {
        SDL_Event event;
	SDL_PollEvent(&event);
	switch(event.type) {
            case SDL_QUIT:
                IsRunning_help_living_room = false;
                break;
            case SDL_MOUSEBUTTONDOWN:
                    if (SDL_PointInRect(&(SDL_Point){event.button.x, event.button.y}, &rect_exit_living_room)) {
                        help(width, height);
                        IsRunning_help_living_room = false;
                        break;
                    }
            default:
                break;
	}
        render_help_living_room();
    }
    
    SDL_DestroyWindow(window_help_living_room);
    SDL_DestroyRenderer(renderer_help_living_room);
    SDL_Quit();
}
