#include "../inc/header.h"

bool IsRunning_help_bath;

SDL_Window *window_help_bath;  
SDL_Renderer *renderer_help_bath;

SDL_Texture *tex_Help_Bathroom;
SDL_Rect rect_Help_Bathroom;

SDL_Texture *tex_group_26;
SDL_Rect rect_group_26;

SDL_Texture *tex_exit_bath;
SDL_Rect rect_exit_bath;

void init_help_bath(const char *title, int x, int y, int width, int height) {
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        printf("Sybsystems Initialised Successfully\n");
	window_help_bath = SDL_CreateWindow(title, x, y, width, height, 0);
	if (window_help_bath) {
        printf("Window created successfully\n");
	}
	renderer_help_bath = SDL_CreateRenderer(window_help_bath, -1, 0);
	SDL_SetRenderDrawColor(renderer_help_bath, 255, 255, 255, 255);
	if (renderer_help_bath) {
        printf("Renderer created successfully\n");
	}
	IsRunning_help_bath = true;
    }
    
    rect_Help_Bathroom.w = 800;
    rect_Help_Bathroom.h = 655;
    tex_Help_Bathroom = IMG_LoadTexture(renderer_help_bath, "resource/im/general/Help_Bathroom.png");
    if (!tex_Help_Bathroom)
        printf("%s\n", SDL_GetError());
        
    rect_group_26.x = 20;
    rect_group_26.y = 30;
    rect_group_26.w = 875;
    rect_group_26.h = 589;
    tex_group_26 = IMG_LoadTexture(renderer_help_bath, "resource/im/general/group_26.png");
    if (!tex_group_26)
        printf("%s\n", SDL_GetError());
    
    rect_exit_bath.x = 914;
    rect_exit_bath.y = 21;
    rect_exit_bath.w = 64;
    rect_exit_bath.h = 16;
    tex_exit_bath = IMG_LoadTexture(renderer_help_bath, "resource/im/general/exit.png");
    if (!tex_exit_bath)
        printf("%s\n", SDL_GetError());

}

void render_help_bath(void) {
    SDL_RenderClear(renderer_help_bath);
    
    SDL_RenderCopy(renderer_help_bath, tex_Help_Bathroom, NULL, &rect_Help_Bathroom);
    SDL_RenderCopy(renderer_help_bath, tex_group_26, NULL, &rect_group_26);
    SDL_RenderCopy(renderer_help_bath, tex_exit_bath, NULL, &rect_exit_bath);
    
    SDL_RenderPresent(renderer_help_bath);
}

void help_bath(const int width, const int height) {
    init_help_bath("Help. Bath", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height);
    
    while (IsRunning_help_bath) {
        SDL_Event event;
        SDL_PollEvent(&event);
        switch (event.type) {
                case SDL_QUIT:
                    IsRunning_help_bath = false;
                    break;
                case SDL_MOUSEBUTTONDOWN:
                    if (SDL_PointInRect(&(SDL_Point){event.button.x, event.button.y}, &rect_exit_bath)) {
                        printf("help bath exit\n");
                        help(width, height);
                        IsRunning_help_bath = false;
                        break;
                    }
                default:
                    break;
        }
            render_help_bath();
        }
    
    SDL_DestroyWindow(window_help_bath);
    SDL_DestroyRenderer(renderer_help_bath);
    SDL_Quit();
}
