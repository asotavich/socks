#include "../inc/header.h"

bool flag_IsRunning;

SDL_Window *window;  
SDL_Renderer *renderer;

SDL_Texture *tex_wall;
SDL_Rect rect_wall;

SDL_Texture *tex_floor;
SDL_Rect rect_floor;

SDL_Texture *tex_table_set;
SDL_Rect rect_table_set;

SDL_Texture *tex_minicup;
SDL_Rect rect_minicup;

SDL_Texture *tex_cup;
SDL_Rect rect_cup;
SDL_Rect rect_cup2;

SDL_Texture *tex_candle;
SDL_Rect rect_candle;

SDL_Texture *tex_fridge;
SDL_Rect rect_fridge;

SDL_Texture *tex_kitchen_table;
SDL_Rect rect_kitchen_table;
SDL_Rect rect_kitchen_table2;

SDL_Texture *tex_shelf_wall;
SDL_Rect rect_shelf_wall;
SDL_Rect rect_shelf_wall2;
SDL_Rect rect_shelf_wall3;

SDL_Texture *tex_bedside_table;
SDL_Rect rect_bedside_table;

SDL_Texture *tex_picture_flowers;
SDL_Rect rect_picture_flowers;

SDL_Texture *tex_window;
SDL_Rect rect_window;

SDL_Texture *tex_round_table;
SDL_Rect rect_round_table;

SDL_Texture *tex_plates;
SDL_Rect rect_plates;

SDL_Texture *tex_phone;
SDL_Rect rect_phone;

SDL_Texture *tex_chair_left;
SDL_Rect rect_chair_left;

SDL_Texture *tex_chair_right;
SDL_Rect rect_chair_right;

SDL_Texture *tex_fish;
SDL_Rect rect_fish;
SDL_Rect rect_fish2;

SDL_Texture *tex_sofa;
SDL_Rect rect_sofa;

SDL_Texture *tex_end_table;
SDL_Rect rect_end_table;

SDL_Texture *tex_flower_pot;
SDL_Rect rect_flower_pot;

SDL_Texture *tex_lamp;
SDL_Rect rect_lamp;

SDL_Texture *tex_shelves_with_dishes;
SDL_Rect rect_shelves_with_dishes;

SDL_Texture *tex_donut_orange;
SDL_Rect rect_donut_orange;

SDL_Texture *tex_donut_red;
SDL_Rect rect_donut_red;

SDL_Texture *tex_sock_ucode;
SDL_Rect rect_sock_ucode;

void init(const char *title, int x, int y, int width, int height, bool fullscreen) {
    srand(time(0));
	int randomNum = rand() % 4;
    int flags = 0;
    if (fullscreen) {
        flags = SDL_WINDOW_FULLSCREEN;
    }
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        printf("Sybsystems Initialised Successfully\n");
	window = SDL_CreateWindow(title, x, y, width, height, flags);
	if (window) {
        printf("Window created successfully\n");
	}
	renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	if (renderer) {
        printf("Renderer created successfully\n");
	}
	flag_IsRunning = true;
    }
    
    rect_wall.w = 800;
    rect_wall.h = 300;
    tex_wall = IMG_LoadTexture(renderer, "resource/images/Kitchen/wall.png");
    if (!tex_wall)
        printf("%s\n", SDL_GetError());

    rect_floor.y = 300;
    rect_floor.w = 800;
    rect_floor.h = 300;
    tex_floor = IMG_LoadTexture(renderer, "resource/images/Kitchen/floor.png");
    if (!tex_floor)
        printf("%s\n", SDL_GetError());
        
    rect_table_set.x = 103;
    rect_table_set.y = 407;
    rect_table_set.w = 252;
    rect_table_set.h = 136;
    tex_table_set = IMG_LoadTexture(renderer, "resource/images/Kitchen/table_set.png");
    if (!tex_table_set)
        printf("%s\n", SDL_GetError());
        
    rect_minicup.x = 205;
    rect_minicup.y = 427;
    rect_minicup.w = 18;
    rect_minicup.h = 20;
    tex_minicup = IMG_LoadTexture(renderer, "resource/images/Kitchen/minicup.png");
    if (!tex_table_set)
        printf("%s\n", SDL_GetError());

    rect_cup.x = 243;
    rect_cup.y = 443;
    rect_cup.w = 21;
    rect_cup.h = 17;
    tex_cup = IMG_LoadTexture(renderer, "resource/images/Kitchen/cup.png");
    if (!tex_cup)
        printf("%s\n", SDL_GetError());
        
    rect_cup2.x = 196;
    rect_cup2.y = 471;
    rect_cup2.w = 21;
    rect_cup2.h = 20;
    tex_cup = IMG_LoadTexture(renderer, "resource/images/Kitchen/cup.png");
    if (!tex_cup)
        printf("%s\n", SDL_GetError());
    
    rect_candle.x = 215;
    rect_candle.y = 444;
    rect_candle.w = 28;
    rect_candle.h = 32;
    tex_candle = IMG_LoadTexture(renderer, "resource/images/Kitchen/candle.png");
    if (!tex_candle)
        printf("%s\n", SDL_GetError());
        
    rect_fridge.x = 8;
    rect_fridge.y = 197;
    rect_fridge.w = 110;
    rect_fridge.h = 135;
    tex_fridge = IMG_LoadTexture(renderer, "resource/images/Kitchen/fridge.png");
    if (!tex_fridge)
        printf("%s\n", SDL_GetError());
        
    rect_kitchen_table.x = 125;
    rect_kitchen_table.y = 222;
    rect_kitchen_table.w = 140;
    rect_kitchen_table.h = 103;
    tex_kitchen_table = IMG_LoadTexture(renderer, "resource/images/Kitchen/kitchen_table.png");
    if (!tex_kitchen_table)
        printf("%s\n", SDL_GetError());

    rect_kitchen_table2.x = 273;
    rect_kitchen_table2.y = 222;
    rect_kitchen_table2.w = 140;
    rect_kitchen_table2.h = 103;
    if (!tex_kitchen_table)
        printf("%s\n", SDL_GetError());

    rect_shelf_wall.x = 117;
    rect_shelf_wall.y = 142;
    rect_shelf_wall.w = 100;
    rect_shelf_wall.h = 51;
    tex_shelf_wall = IMG_LoadTexture(renderer, "resource/images/Kitchen/shelf_wall.png");
    if (!tex_shelf_wall)
        printf("%s\n", SDL_GetError());
        
    rect_shelf_wall2.x = 225;
    rect_shelf_wall2.y = 142;
    rect_shelf_wall2.w = 100;
    rect_shelf_wall2.h = 51;
    tex_shelf_wall = IMG_LoadTexture(renderer, "resource/images/Kitchen/shelf_wall.png");
    if (!tex_shelf_wall)
        printf("%s\n", SDL_GetError());

    rect_shelf_wall3.x = 339;
    rect_shelf_wall3.y = 142;
    rect_shelf_wall3.w = 100;
    rect_shelf_wall3.h = 51;
    tex_shelf_wall = IMG_LoadTexture(renderer, "resource/images/Kitchen/shelf_wall.png");
    if (!tex_shelf_wall)
        printf("%s\n", SDL_GetError());

    rect_bedside_table.x = 728;
    rect_bedside_table.y = 260;
    rect_bedside_table.w = 65;
    rect_bedside_table.h = 67;
    tex_bedside_table = IMG_LoadTexture(renderer, "resource/images/Kitchen/bedside_table.png");
    if (!tex_bedside_table)
        printf("%s\n", SDL_GetError());

    rect_picture_flowers.x = 545;
    rect_picture_flowers.y = 123;
    rect_picture_flowers.w = 70;
    rect_picture_flowers.h = 80;
    tex_picture_flowers = IMG_LoadTexture(renderer, "resource/images/Kitchen/picture_flowers.png");
    if (!tex_picture_flowers)
        printf("%s\n", SDL_GetError());

    rect_window.x = 676;
    rect_window.y = 98;
    rect_window.w = 100;
    rect_window.h = 95;
    tex_window = IMG_LoadTexture(renderer, "resource/images/Kitchen/window.png");
    if (!tex_window)
        printf("%s\n", SDL_GetError());

    rect_round_table.x = 581;
    rect_round_table.y = 338;
    rect_round_table.w = 105;
    rect_round_table.h = 92;
    tex_round_table = IMG_LoadTexture(renderer, "resource/images/Kitchen/round_table.png");
    if (!tex_round_table)
        printf("%s\n", SDL_GetError());

    rect_plates.x = 597;
    rect_plates.y = 357;
    rect_plates.w = 42;
    rect_plates.h = 40;
    tex_plates = IMG_LoadTexture(renderer, "resource/images/Kitchen/plates.png");
    if (!tex_plates)
        printf("%s\n", SDL_GetError());

    rect_phone.x = 738;
    rect_phone.y = 243;
    rect_phone.w = 34;
    rect_phone.h = 34;
    tex_phone = IMG_LoadTexture(renderer, "resource/images/Kitchen/phone.png");
    if (!tex_phone)
        printf("%s\n", SDL_GetError());

    rect_chair_left.x = 535;
    rect_chair_left.y = 360;
    rect_chair_left.w = 31;
    rect_chair_left.h = 55;
    tex_chair_left = IMG_LoadTexture(renderer, "resource/images/Kitchen/chair_left.png");
    if (!tex_chair_left)
        printf("%s\n", SDL_GetError());
        
    rect_chair_right.x = 700;
    rect_chair_right.y = 360;
    rect_chair_right.w = 33;
    rect_chair_right.h = 55;
    tex_chair_right = IMG_LoadTexture(renderer, "resource/images/Kitchen/chair_right.png");
    if (!tex_chair_right)
        printf("%s\n", SDL_GetError());

    rect_fish.x = 623;
    rect_fish.y = 346;
    rect_fish.w = 32;
    rect_fish.h = 22;
    tex_fish = IMG_LoadTexture(renderer, "resource/images/Kitchen/fish.png");
    if (!tex_fish)
        printf("%s\n", SDL_GetError());

    rect_fish2.x = 646;
    rect_fish2.y = 363;
    rect_fish2.w = 32;
    rect_fish2.h = 20;
    tex_fish = IMG_LoadTexture(renderer, "resource/images/Kitchen/fish.png");
    if (!tex_fish)
        printf("%s\n", SDL_GetError());

    rect_sofa.x = 518;
    rect_sofa.y = 234;
    rect_sofa.w = 205;
    rect_sofa.h = 95;
    tex_sofa = IMG_LoadTexture(renderer, "resource/images/Kitchen/sofa.png");
    if (!tex_sofa)
        printf("%s\n", SDL_GetError());
    
    rect_end_table.x = 685;
    rect_end_table.y = 505;
    rect_end_table.w = 95;
    rect_end_table.h = 75;
    tex_end_table = IMG_LoadTexture(renderer, "resource/images/Kitchen/end_table.png");
    if (!tex_end_table)
        printf("%s\n", SDL_GetError()); 

    rect_flower_pot.x = 685;
    rect_flower_pot.y = 496;
    rect_flower_pot.w = 65;
    rect_flower_pot.h = 40;
    tex_flower_pot = IMG_LoadTexture(renderer, "resource/images/Kitchen/flower_pot.png");
    if (!tex_flower_pot)
        printf("%s\n", SDL_GetError()); 
        
    rect_lamp.x = 747;
    rect_lamp.y = 483;
    rect_lamp.w = 30;
    rect_lamp.h = 44;
    tex_lamp = IMG_LoadTexture(renderer, "resource/images/Kitchen/lamp.png");
    if (!tex_lamp)
        printf("%s\n", SDL_GetError());
        
    rect_shelves_with_dishes.x = 747;
    rect_shelves_with_dishes.y = 483;
    rect_shelves_with_dishes.w = 30;
    rect_shelves_with_dishes.h = 44;
    tex_shelves_with_dishes = IMG_LoadTexture(renderer, "resource/images/Kitchen/shelves_with_dishes.png");
    if (!tex_shelves_with_dishes)
        printf("%s\n", SDL_GetError());              

    rect_donut_orange.x = 172;
    rect_donut_orange.y = 453;
    rect_donut_orange.w = 16;
    rect_donut_orange.h = 14;
    tex_donut_orange = IMG_LoadTexture(renderer, "resource/images/Kitchen/donut_orange.png");
    if (!tex_donut_orange)
        printf("%s\n", SDL_GetError());  
        
    rect_donut_red.x = 272;
    rect_donut_red.y = 453;
    rect_donut_red.w = 16;
    rect_donut_red.h = 14;
    tex_donut_red = IMG_LoadTexture(renderer, "resource/images/Kitchen/donut_red.png");
    if (!tex_donut_red)
        printf("%s\n", SDL_GetError());  

    if (randomNum == 0) {
        rect_sock_ucode.x = 53;
        rect_sock_ucode.y = 241;
        rect_sock_ucode.w = 45;
        rect_sock_ucode.h = 66;
    }
    if (randomNum == 1) {
        rect_sock_ucode.x = 623;
        rect_sock_ucode.y = 45;
        rect_sock_ucode.w = 45;
        rect_sock_ucode.h = 66;
    }
    else if (randomNum == 2) {
        rect_sock_ucode.x = 715;
        rect_sock_ucode.y = 505;
        rect_sock_ucode.w = 45;
        rect_sock_ucode.h = 66;
    }
    else if (randomNum == 3) {
        rect_sock_ucode.x = 616;
        rect_sock_ucode.y = 342;
        rect_sock_ucode.w = 45;
        rect_sock_ucode.h = 66;
    }
    tex_sock_ucode = IMG_LoadTexture(renderer, "resource/images/Kitchen/sock_ucode 1.png");
    if (!tex_donut_orange)
        printf("%s\n", SDL_GetError()); 
}

void render() {
    SDL_RenderClear(renderer);
    
    SDL_RenderCopy(renderer, tex_wall, NULL, &rect_wall);
    SDL_RenderCopy(renderer, tex_floor, NULL, &rect_floor);
    SDL_RenderCopy(renderer, tex_table_set, NULL, &rect_table_set);
    SDL_RenderCopy(renderer, tex_minicup, NULL, &rect_minicup);
    SDL_RenderCopy(renderer, tex_cup, NULL, &rect_cup);
    SDL_RenderCopy(renderer, tex_cup, NULL, &rect_cup2);
    SDL_RenderCopy(renderer, tex_candle, NULL, &rect_candle);
    SDL_RenderCopy(renderer, tex_fridge, NULL, &rect_fridge);
    SDL_RenderCopy(renderer, tex_kitchen_table, NULL, &rect_kitchen_table);
    SDL_RenderCopy(renderer, tex_kitchen_table, NULL, &rect_kitchen_table2);
    SDL_RenderCopy(renderer, tex_shelf_wall, NULL, &rect_shelf_wall);
    SDL_RenderCopy(renderer, tex_shelf_wall, NULL, &rect_shelf_wall2);
    SDL_RenderCopy(renderer, tex_shelf_wall, NULL, &rect_shelf_wall3);
    SDL_RenderCopy(renderer, tex_bedside_table, NULL, &rect_bedside_table);
    SDL_RenderCopy(renderer, tex_picture_flowers, NULL, &rect_picture_flowers);
    SDL_RenderCopy(renderer, tex_window, NULL, &rect_window);
    SDL_RenderCopy(renderer, tex_round_table, NULL, &rect_round_table);
    SDL_RenderCopy(renderer, tex_plates, NULL, &rect_plates);
    SDL_RenderCopy(renderer, tex_phone, NULL, &rect_phone);
    SDL_RenderCopy(renderer, tex_chair_left, NULL, &rect_chair_left);
    SDL_RenderCopy(renderer, tex_chair_right, NULL, &rect_chair_right);
    SDL_RenderCopy(renderer, tex_fish, NULL, &rect_fish);
    SDL_RenderCopy(renderer, tex_fish, NULL, &rect_fish2);
    SDL_RenderCopy(renderer, tex_sofa, NULL, &rect_sofa);
    SDL_RenderCopy(renderer, tex_end_table, NULL, &rect_end_table);
    SDL_RenderCopy(renderer, tex_flower_pot, NULL, &rect_flower_pot);
    SDL_RenderCopy(renderer, tex_lamp, NULL, &rect_lamp);
    SDL_RenderCopy(renderer, tex_shelves_with_dishes, NULL, &rect_shelves_with_dishes);
    SDL_RenderCopy(renderer, tex_donut_orange, NULL, &rect_donut_orange);
    SDL_RenderCopy(renderer, tex_donut_red, NULL, &rect_donut_red);
    
    SDL_RenderPresent(renderer);
}

void remove_object_kitchen(char *letters) {
	int r;
	srand(time(0));
	printf("letters is %s\n", letters);

	if (!(strcmp(letters, "donut orange")))
		rect_donut_orange.x = -1000;

	if (!(strcmp(letters, "donut red")))
		rect_donut_red.x = -1000;

	if (!(strcmp(letters, "cup")))
		rect_cup.x = -1000;

	if (!(strcmp(letters, "minicup gray")))
		rect_minicup.x = -1000;

	if (!(strcmp(letters, "candle")))
		rect_candle.x = -1000;

	if (!(strcmp(letters, "fish")))
		rect_fish.x = -1000;

	if (!(strcmp(letters, "plates")))
		rect_plates.x = -1000;

	if (!(strcmp(letters, "lamp")))
		rect_lamp.x = -1000;

	if (!(strcmp(letters, "phone")))
		rect_phone.x = -1000;

	if (!(strcmp(letters, "chair"))) {
		r = rand() % 2;
		if (r == 0) rect_chair_left.x = -1000;
		if (r == 1) rect_chair_right.x = -1000;
	}

	if (!(strcmp(letters, "flower pot")))
		rect_flower_pot.x = -1000;

	if (!(strcmp(letters, "round table")))
		rect_round_table.x = -1000;

	if (!(strcmp(letters, "shelf wall"))) {
		r = rand() % 3;
		if (r == 0) rect_shelf_wall.x = -1000;
		if (r == 1) rect_shelf_wall2.x = -1000;
		if (r == 1) rect_shelf_wall3.x = -1000;
	}

	if (!(strcmp(letters, "bedside table")))
		rect_bedside_table.x = -1000;

	if (!(strcmp(letters, "end table")))
		rect_end_table.x = -1000;

	if (!(strcmp(letters, "picture flowers")))
		rect_picture_flowers.x = -1000;

	if (!(strcmp(letters, "table set")))
		rect_table_set.x = -1000;

	if (!(strcmp(letters, "sofa")))
		rect_sofa.x = -1000;

	if (!(strcmp(letters, "kitchen table"))) {
		r = rand() % 2;
		if (r == 0) rect_kitchen_table.x = -1000;
		if (r == 1) rect_kitchen_table2.x = -1000;
	}

	if (!(strcmp(letters, "shelves with dishes")))
		rect_shelves_with_dishes.x = -1000;

	if (!(strcmp(letters, "fridge")))
		rect_fridge.x = -1000;
}

void clean() {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	printf("Game Cleaned\n");
}

int kitchen(const int width, const int height) {
	char letters[100];
	int enter = 0,
		count = 0;

    init("Find the sock", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, false);

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
					remove_object_kitchen(letters);
					printf("if in\n");
					for (int i = 0; i < count; i++)
						letters[i] = '\0';
					count = 0;
					printf("count after loop is %d\n", count);
				}
				break;
            case SDL_MOUSEBUTTONDOWN:
                    if (SDL_PointInRect(&(SDL_Point){event.button.x, event.button.y}, &rect_sock_ucode)) {
                        //printf("Button RULES clicked!\n");
						win(width, height);
                        clean(window, renderer);
						return;
                    }
		}
		render();
	}

	for (int i = 0; i < count; i++) {
		printf("%c", letters[i]);
	}

    lose(width, height);
    clean(window, renderer);

    return 0;
}
