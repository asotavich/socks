#include "../inc/header.h"

bool flag_IsRunning;

SDL_Window *window_bath;  
SDL_Renderer *renderer_bath;

SDL_Texture *tex_wall;
SDL_Rect rect_wall;

SDL_Texture *tex_floor;
SDL_Rect rect_floor;

SDL_Texture *tex_towel_stand;
SDL_Rect rect_towel_stand;

SDL_Texture *tex_bedside_table;
SDL_Rect rect_bedside_table;
SDL_Rect rect_bedside_table_2;

SDL_Texture *tex_bulb_blackpng;
SDL_Rect rect_bulb_blackpng;
SDL_Rect rect_bulb_blackpng_2;

SDL_Texture *tex_bulb_gray;
SDL_Rect rect_bulb_gray;
SDL_Rect rect_bulb_gray_2;

SDL_Texture *tex_cacti;
SDL_Rect rect_cacti;
SDL_Rect rect_cacti_2;

SDL_Texture *tex_candle;
SDL_Rect rect_candle;

SDL_Texture *tex_carpet_blue;
SDL_Rect rect_carpet_blue;

SDL_Texture *tex_carpet_blue;
SDL_Rect rect_carpet_blue;

SDL_Texture *tex_carpet_yellow;
SDL_Rect rect_carpet_yellow;

SDL_Texture *tex_door;
SDL_Rect rect_door;

SDL_Texture *tex_end_table;
SDL_Rect rect_end_table;

SDL_Texture *tex_minicup_gray;
SDL_Rect rect_minicup_gray;
SDL_Rect rect_minicup_gray_2;

SDL_Texture *tex_minicup_red;
SDL_Rect rect_minicup_red;

SDL_Texture *tex_mirror;
SDL_Rect rect_mirror;

SDL_Texture *tex_shelf_wall;
SDL_Rect rect_shelf_wall;

SDL_Texture *tex_shelves;
SDL_Rect rect_shelves;

SDL_Texture *tex_sink;
SDL_Rect rect_sink;

SDL_Texture *tex_toilet;
SDL_Rect rect_toilet;
SDL_Rect rect_toilet_2;

SDL_Texture *tex_towel;
SDL_Rect rect_towel;

SDL_Texture *tex_tub;
SDL_Rect rect_tub;

SDL_Texture *tex_washing_machine;
SDL_Rect rect_washing_machine;

SDL_Texture *tex_sock_trident;
SDL_Rect rect_sock_trident;

void init_bath(const char *title, int x, int y, int width, int height, bool fullscreen) {
    srand(time(0));
	int randomNum = rand() % 5;
    int flags = 0;
    if (fullscreen) {
        flags = SDL_WINDOW_FULLSCREEN;
    }
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        printf("Sybsystems Initialised Successfully\n");
	window_bath = SDL_CreateWindow(title, x, y, width, height, flags);
	if (window_bath) {
        printf("Window created successfully\n");
	}
	renderer_bath = SDL_CreateRenderer(window_bath, -1, 0);
	SDL_SetRenderDrawColor(renderer_bath, 255, 255, 255, 255);
	if (renderer_bath) {
        printf("Renderer created successfully\n");
	}
	flag_IsRunning = true;
    }

    if (randomNum == 0) {
		rect_sock_trident.h = 66;
		rect_sock_trident.w = 45;
		rect_sock_trident.x = 77;
		rect_sock_trident.y = 150;
	}
	else if (randomNum == 1) {
		rect_sock_trident.h = 66;
		rect_sock_trident.w = 45;
		rect_sock_trident.x = 62;
		rect_sock_trident.y = 280;
	}
	else if (randomNum == 2) {
		rect_sock_trident.h = 66;
		rect_sock_trident.w = 45;
		rect_sock_trident.x = 62;
		rect_sock_trident.y = 514;
	} else if (randomNum == 3) {
		rect_sock_trident.h = 66;
		rect_sock_trident.w = 45;
		rect_sock_trident.x = 480;
		rect_sock_trident.y = 146;
	} else if (randomNum == 4) {
		rect_sock_trident.h = 66;
		rect_sock_trident.w = 45;
		rect_sock_trident.x = 690;
		rect_sock_trident.y = 340;
	}

    tex_sock_trident = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/sock_trident.png");
    
    rect_wall.w = 800;
    rect_wall.h = 300;
    tex_wall = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/wall.png");
    if (!tex_wall)
        printf("%s\n", SDL_GetError());

    rect_floor.y = 300;
    rect_floor.w = 800;
    rect_floor.h = 300;
    tex_floor = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/floor.png");
    if (!tex_floor)
        printf("%s\n", SDL_GetError());
        
    rect_towel_stand.x = 5;
    rect_towel_stand.y = 206;
    rect_towel_stand.w = 44;
    rect_towel_stand.h = 110;
    tex_towel_stand = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/towel_stand.png");
    if (!tex_towel_stand)
        printf("%s\n", SDL_GetError());
        
    rect_shelves.x = 555;
    rect_shelves.y = 193;
    rect_shelves.w = 70;
    rect_shelves.h = 123;
    tex_shelves = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/shelves.png");
    if (!tex_shelves)
        printf("%s\n", SDL_GetError());

    rect_bedside_table.x = 215;
    rect_bedside_table.y = 247;
    rect_bedside_table.w = 60;
    rect_bedside_table.h = 62;
    tex_bedside_table = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/bedside_table.png");
    if (!tex_bedside_table)
        printf("%s\n", SDL_GetError());
        
    rect_bedside_table_2.x = 275;
    rect_bedside_table_2.y = 247;
    rect_bedside_table_2.w = 60;
    rect_bedside_table_2.h = 62;
    tex_bedside_table = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/bedside_table.png");
    if (!tex_bedside_table)
        printf("%s\n", SDL_GetError());
        
    rect_bulb_blackpng.x = 567;
    rect_bulb_blackpng.y = 257;
    rect_bulb_blackpng.w = 20;
    rect_bulb_blackpng.h = 23;
    tex_bulb_blackpng = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/bulb_blackpng.png");
    if (!tex_bulb_blackpng)
        printf("%s\n", SDL_GetError());
        
    rect_bulb_blackpng_2.x = 593;
    rect_bulb_blackpng_2.y = 257;
    rect_bulb_blackpng_2.w = 20;
    rect_bulb_blackpng_2.h = 23;
    tex_bulb_blackpng = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/bulb_blackpng.png");
    if (!tex_bulb_blackpng)
        printf("%s\n", SDL_GetError());
        
    rect_bulb_gray.x = 567;
    rect_bulb_gray.y = 278;
    rect_bulb_gray.w = 20;
    rect_bulb_gray.h = 23;
    tex_bulb_gray = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/bulb_gray.png");
    if (!tex_bulb_gray)
        printf("%s\n", SDL_GetError());
        
    rect_bulb_gray_2.x = 593;
    rect_bulb_gray_2.y = 278;
    rect_bulb_gray_2.w = 20;
    rect_bulb_gray_2.h = 23;
    tex_bulb_gray = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/bulb_gray.png");
    if (!tex_bulb_gray)
        printf("%s\n", SDL_GetError());
        
    rect_cacti.x = 215;
    rect_cacti.y = 226;
    rect_cacti.w = 60;
    rect_cacti.h = 41;
    tex_cacti = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/cacti.png");
    if (!tex_cacti)
        printf("%s\n", SDL_GetError());
    
    rect_cacti_2.x = 275;
    rect_cacti_2.y = 226;
    rect_cacti_2.w = 60;
    rect_cacti_2.h = 41;
    tex_cacti = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/cacti.png");
    if (!tex_cacti)
        printf("%s\n", SDL_GetError());
        
        
    rect_carpet_blue.x = 255;
    rect_carpet_blue.y = 354;
    rect_carpet_blue.w = 250;
    rect_carpet_blue.h = 190;
    tex_carpet_blue = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/carpet_blue.png");
    if (!tex_carpet_blue)
        printf("%s\n", SDL_GetError());
    
    rect_carpet_yellow.x = 620;
    rect_carpet_yellow.y = 309;
    rect_carpet_yellow.w = 170;
    rect_carpet_yellow.h = 130;
    tex_carpet_yellow = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/carpet_yellow.png");
    if (!tex_carpet_yellow)
        printf("%s\n", SDL_GetError());
        
    rect_door.x = 630;
    rect_door.y = 146;
    rect_door.w = 150;
    rect_door.h = 163;
    tex_door = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/door.png");
    if (!tex_door)
        printf("%s\n", SDL_GetError());
        
    rect_end_table.x = 460;
    rect_end_table.y = 251;
    rect_end_table.w = 90;
    rect_end_table.h = 72;
    tex_end_table = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/end_table.png");
    if (!tex_end_table)
        printf("%s\n", SDL_GetError());
        
    rect_minicup_gray.x = 567;
    rect_minicup_gray.y = 228;
    rect_minicup_gray.w = 20;
    rect_minicup_gray.h = 23;
    tex_minicup_gray = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/minicup_gray.png");
    if (!tex_minicup_gray)
        printf("%s\n", SDL_GetError());
        
    rect_minicup_gray_2.x = 593;
    rect_minicup_gray_2.y = 228;
    rect_minicup_gray_2.w = 20;
    rect_minicup_gray_2.h = 23;
    tex_minicup_gray = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/minicup_gray.png");
    if (!tex_minicup_gray)
        printf("%s\n", SDL_GetError());
        
    rect_minicup_red.x = 491;
    rect_minicup_red.y = 251;
    rect_minicup_red.w = 20;
    rect_minicup_red.h = 23;
    tex_minicup_red = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/minicup_red.png");
    if (!tex_minicup_red)
        printf("%s\n", SDL_GetError());
        
    rect_candle.x = 515;
    rect_candle.y = 252;
    rect_candle.w = 25;
    rect_candle.h = 27;
    tex_candle = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/candle.png");
    if (!tex_candle)
        printf("%s\n", SDL_GetError());
        
    rect_mirror.x = 470;
    rect_mirror.y = 127;
    rect_mirror.w = 70;
    rect_mirror.h = 108;
    tex_mirror = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/mirror.png");
    if (!tex_mirror)
        printf("%s\n", SDL_GetError());
        
    rect_shelf_wall.x = 366;
    rect_shelf_wall.y = 141;
    rect_shelf_wall.w = 78;
    rect_shelf_wall.h = 40;
    tex_shelf_wall = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/shelf_wall.png");
    if (!tex_shelf_wall)
        printf("%s\n", SDL_GetError());
        
    rect_sink.x = 375;
    rect_sink.y = 196;
    rect_sink.w = 60;
    rect_sink.h = 76;
    tex_sink = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/sink.png");
    if (!tex_sink)
        printf("%s\n", SDL_GetError());
        
    rect_toilet.x = 620;
    rect_toilet.y = 507;
    rect_toilet.w = 70;
    rect_toilet.h = 73;
    tex_toilet = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/toilet.png");
    if (!tex_toilet)
        printf("%s\n", SDL_GetError());
        
    rect_toilet_2.x = 705;
    rect_toilet_2.y = 507;
    rect_toilet_2.w = 70;
    rect_toilet_2.h = 73;
    tex_toilet = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/toilet.png");
    if (!tex_toilet)
        printf("%s\n", SDL_GetError());
        
    rect_towel.x = 55;
    rect_towel.y = 136;
    rect_towel.w = 90;
    rect_towel.h = 90;
    tex_towel = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/towel.png");
    if (!tex_towel)
        printf("%s\n", SDL_GetError());
        
    rect_tub.x = 39;
    rect_tub.y = 247;
    rect_tub.w = 150;
    rect_tub.h = 116;
    tex_tub = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/tub.png");
    if (!tex_tub)
        printf("%s\n", SDL_GetError());
        
    rect_washing_machine.x = 15;
    rect_washing_machine.y = 482;
    rect_washing_machine.w = 140;
    rect_washing_machine.h = 118;
    tex_washing_machine = IMG_LoadTexture(renderer_bath, "resource/images_b/Bath/washing_machine.png");
    if (!tex_washing_machine)
        printf("%s\n", SDL_GetError());
}

void render_bath() {
    SDL_RenderClear(renderer_bath);
    
    SDL_RenderCopy(renderer_bath, tex_wall, NULL, &rect_wall);
    SDL_RenderCopy(renderer_bath, tex_floor, NULL, &rect_floor);
    SDL_RenderCopy(renderer_bath, tex_towel_stand, NULL, &rect_towel_stand);
    SDL_RenderCopy(renderer_bath, tex_shelves, NULL, &rect_shelves);
    SDL_RenderCopy(renderer_bath, tex_bedside_table, NULL, &rect_bedside_table);
    SDL_RenderCopy(renderer_bath, tex_bedside_table, NULL, &rect_bedside_table_2);
    SDL_RenderCopy(renderer_bath, tex_bulb_blackpng, NULL, &rect_bulb_blackpng);
    SDL_RenderCopy(renderer_bath, tex_bulb_blackpng, NULL, &rect_bulb_blackpng_2);
    SDL_RenderCopy(renderer_bath, tex_bulb_gray, NULL, &rect_bulb_gray);
    SDL_RenderCopy(renderer_bath, tex_bulb_gray, NULL, &rect_bulb_gray_2);
    SDL_RenderCopy(renderer_bath, tex_cacti, NULL, &rect_cacti);
    SDL_RenderCopy(renderer_bath, tex_cacti, NULL, &rect_cacti_2);
    SDL_RenderCopy(renderer_bath, tex_carpet_blue, NULL, &rect_carpet_blue);
    SDL_RenderCopy(renderer_bath, tex_carpet_yellow, NULL, &rect_carpet_yellow);
    SDL_RenderCopy(renderer_bath, tex_door, NULL, &rect_door);
    SDL_RenderCopy(renderer_bath, tex_end_table, NULL, &rect_end_table);
    SDL_RenderCopy(renderer_bath, tex_minicup_gray, NULL, &rect_minicup_gray);
    SDL_RenderCopy(renderer_bath, tex_minicup_gray, NULL, &rect_minicup_gray_2);
    SDL_RenderCopy(renderer_bath, tex_minicup_red, NULL, &rect_minicup_red);
    SDL_RenderCopy(renderer_bath, tex_candle, NULL, &rect_candle);
    SDL_RenderCopy(renderer_bath, tex_mirror, NULL, &rect_mirror);
    SDL_RenderCopy(renderer_bath, tex_shelf_wall, NULL, &rect_shelf_wall);
    SDL_RenderCopy(renderer_bath, tex_sink, NULL, &rect_sink);
    SDL_RenderCopy(renderer_bath, tex_toilet, NULL, &rect_toilet);
    SDL_RenderCopy(renderer_bath, tex_toilet, NULL, &rect_toilet_2);
    SDL_RenderCopy(renderer_bath, tex_towel, NULL, &rect_towel);
    SDL_RenderCopy(renderer_bath, tex_tub, NULL, &rect_tub);
    SDL_RenderCopy(renderer_bath, tex_washing_machine, NULL, &rect_washing_machine);
    
        
    SDL_RenderPresent(renderer_bath);
}

void remove_object_bath(char *letters) {
	int r;
	srand(time(0));
	printf("letters is %s\n", letters);

	if (!(strcmp(letters, "towel stand")))
		rect_towel_stand.x = -1000;

	if (!(strcmp(letters, "shelves")))
		rect_shelves.x = -1000;

	if (!(strcmp(letters, "bedside table"))) {
        r = rand() % 2;
		if (r == 0) rect_bedside_table.x = -1000;
		if (r == 1) rect_bedside_table_2.x = -1000;
    }

    if (!(strcmp(letters, "bulb black"))) {
        r = rand() % 2;
		if (r == 0) rect_bulb_blackpng.x = -1000;
		if (r == 1) rect_bulb_blackpng_2.x = -1000;
    }

    if (!(strcmp(letters, "bulb gray"))) {
        r = rand() % 2;
		if (r == 0) rect_bulb_gray.x = -1000;
		if (r == 1) rect_bulb_gray_2.x = -1000;
    }

    if (!(strcmp(letters, "cacti"))) {
        r = rand() % 2;
		if (r == 0) rect_cacti.x = -1000;
		if (r == 1) rect_cacti_2.x = -1000;
    }

	if (!(strcmp(letters, "carpet blue")))
		rect_carpet_blue.x = -1000;

	if (!(strcmp(letters, "carpet yellow")))
		rect_carpet_yellow.x = -1000;

	if (!(strcmp(letters, "end table")))
		rect_end_table.x = -1000;

	if (!(strcmp(letters, "minicup gray"))) {
        r = rand() % 2;
		if (r == 0) rect_minicup_gray.x = -1000;
		if (r == 1) rect_minicup_gray_2.x = -1000;
    }

	if (!(strcmp(letters, "minicup red")))
		rect_minicup_red.x = -1000;

	if (!(strcmp(letters, "candle")))
		rect_candle.x = -1000;

	if (!(strcmp(letters, "mirror")))
		rect_mirror.x = -1000;

	if (!(strcmp(letters, "shelf wall")))
		rect_shelf_wall.x = -1000;

	if (!(strcmp(letters, "sink")))
		rect_sink.x = -1000;

	if (!(strcmp(letters, "toilet"))) {
        r = rand() % 2;
		if (r == 0) rect_toilet.x = -1000;
		if (r == 1) rect_toilet_2.x = -1000;
    }

	if (!(strcmp(letters, "towel")))
		rect_towel.x = -1000;

	if (!(strcmp(letters, "tub")))
		rect_tub.x = -1000;

	if (!(strcmp(letters, "washing machine")))
		rect_washing_machine.x = -1000;
}

int bath(const int width, const int height) {
    char letters[100];
	int enter = 0,
		count = 0;
    
    init_bath("Bath", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, false);
    
    while (flag_IsRunning) {
        enter = 0;
        SDL_Event event;
        SDL_PollEvent(&event);
        switch(event.type) {
            case SDL_QUIT:
                flag_IsRunning = false;
                break;

            case SDL_KEYDOWN:
				count = keydown(event, letters, &enter);
				if (enter == 1) {
					remove_object_bath(letters);
					printf("if in\n");
					for (int i = 0; i < count; i++)
						letters[i] = '\0';
					count = 0;
					printf("count after loop is %d\n", count);
				}
				break;
            case SDL_MOUSEBUTTONDOWN:
                    if (SDL_PointInRect(&(SDL_Point){event.button.x, event.button.y}, &rect_sock_trident)) {
                        //printf("Button RULES clicked!\n");
						win(width, height);
                        clean(window_bath, renderer_bath);
						return;
                    }

            default:
                break;
        }
        render_bath();
    }
    
    lose(width, height);
    clean(window_bath, renderer_bath);
    
    return 0;
} 
