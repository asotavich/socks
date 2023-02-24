#include "../inc/header.h"

SDL_Window *window;

SDL_Renderer *renderer;

SDL_Texture* wallTex;
SDL_Rect srcWallR, destWallR;

SDL_Texture* floorTex;
SDL_Rect srcFloorR, destFloorR;

SDL_Texture* sockBinaryTex;
SDL_Rect srcSockBinaryR, destSockBinaryR;

SDL_Texture* tallBookcaseTex;
SDL_Rect srcTallBookcaseR, destTallBookcaseR;

SDL_Texture* booksOnTheStoolTex;
SDL_Rect srcBooksOnTheStoolR, destBooksOnTheStoolR;

SDL_Texture* clockTex;
SDL_Rect srcClockR, destClockR;

SDL_Texture* candlesTex;
SDL_Rect srcCandlesR, destCandlesR;

SDL_Texture* horizontalStandTex;
SDL_Rect srcHorizontalStandR, destHorizontalStandR;

SDL_Texture* radioTex;
SDL_Rect srcRadioR, destRadioR;

SDL_Texture* vaseTex;
SDL_Rect srcVaseR, destVaseR;

SDL_Texture* minibarTex;
SDL_Rect srcMinibarR, destMinibarR;

SDL_Texture* sofaTex;
SDL_Rect srcSofaR, destSofaR;

SDL_Texture* plantDarkTex;
SDL_Rect srcPlantDarkR, destPlantDarkR;

SDL_Texture* fireplaceTex;
SDL_Rect srcFireplaceR, destFireplaceR;

SDL_Texture* pictureRockTex;
SDL_Rect srcPictureRockR, destPictureRockR;

SDL_Texture* roundClockTex;
SDL_Rect srcRoundClockR, destRoundClockR;

SDL_Texture* writeTableAndChairTex;
SDL_Rect srcWriteTableAndChairR, destWriteTableAndChairR;

SDL_Texture* inkTex;
SDL_Rect srcInkR, destInkR;

SDL_Texture* fortepianoTex;
SDL_Rect srcFortepianoR, destFortepianoR;

SDL_Texture* redCarpetTex;
SDL_Rect srcRedCarpetR, destRedCarpetR;

SDL_Texture* toyHorseTex;
SDL_Rect srcToyHorseR, destToyHorseR;

SDL_Texture* ballTex;
SDL_Rect srcBallR, destBallR;

SDL_Texture* bigTableTex;
SDL_Rect srcBigTableR, destBigTableR;

SDL_Texture* chairRight1Tex;
SDL_Rect srcChairRight1R, destChairRight1R;

SDL_Texture* chairRight2Tex;
SDL_Rect srcChairRight2R, destChairRight2R;

SDL_Texture* chairRight3Tex;
SDL_Rect srcChairRight3R, destChairRight3R;

SDL_Texture* chairRight4Tex;
SDL_Rect srcChairRight4R, destChairRight4R;

SDL_Texture* vaseWithRedFlowersTex;
SDL_Rect srcVaseWithRedFlowersR, destVaseWithRedFlowersR;

SDL_Texture* openedOrangeBookTex;
SDL_Rect srcOpenedOrangeBookR, destOpenedOrangeBookR;

SDL_Texture* platesTex;
SDL_Rect srcPlatesR, destPlatesR;

SDL_Texture* fishTex;
SDL_Rect srcFishR, destFishR;

SDL_Texture* yellowTableTex;
SDL_Rect srcYeallowTableR, destYellowTableR;

SDL_Texture* whiteChair1Tex;
SDL_Rect srcWhiteChair1R, destWhiteChair1R;

SDL_Texture* whiteChair2Tex;
SDL_Rect srcWhiteChair2R, destWhiteChair2R;

SDL_Texture* messageTex;
SDL_Rect srcMessageR, destMessageR;

SDL_Texture* rectangleTex;
SDL_Rect srcRectangleR, destRectangleR;

SDL_Texture* typeHereTex;
SDL_Rect srcTypeHereR, destTypeHereR;

SDL_Surface* text = NULL;

//TTF_Font* Sans = TTF_OpenFont("OpenSans-Regular.ttf", 24);
//SDL_Color Black = {0, 0, 0};


bool isRunning;

bool running() {
	return isRunning;
}

//int cnt = 0;
int count = 0;

void init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen) {
	srand(time(0));
	int flags = 0;
	int randomNum = rand() % 3;
	//TTF_Init();
	//TTF_Init();

	if (fullscreen) {
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		printf("Sybsystems Initialised!...\n");

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

		if (window) {
			printf("Window created!\n");
		}

		renderer = SDL_CreateRenderer(window, -1, 0);
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

		if (renderer) {
			printf("Renderer created!\n");
		}

		isRunning = true;
	}

	SDL_Surface* tmpSurfaceWall = IMG_Load("resource/Images/Living room/Wall.png");
	SDL_Surface* tmpSurfaceFloor = IMG_Load("resource/Images/Living room/Floor.png");
	SDL_Surface* tmpSurfaceSockBinary = IMG_Load("resource/Images/Living room/sock_binary 1.png");
	SDL_Surface* tmpSurfaceTallBookcase = IMG_Load("resource/Images/Living room/tall bookcase 1.png");
	SDL_Surface* tmpSurfaceBooksOnTheStool = IMG_Load("resource/Images/Living room/books on the stool 1.png");
	SDL_Surface* tmpSurfaceClock = IMG_Load("resource/Images/Living room/clock 1.png");
	SDL_Surface* tmpSurfaceCandles = IMG_Load("resource/Images/Living room/Candles.png");
	SDL_Surface* tmpSurfaceHorizontalStand = IMG_Load("resource/Images/Living room/horizontal stand 1.png");
	SDL_Surface* tmpSurfaceRadio = IMG_Load("resource/Images/Living room/radio 1.png");
	SDL_Surface* tmpSurfaceVase = IMG_Load("resource/Images/Living room/vase with pink flowers 1.png");
	SDL_Surface* tmpSurfaceMinibar = IMG_Load("resource/Images/Living room/minibar 1.png");
	SDL_Surface* tmpSurfaceSofa = IMG_Load("resource/Images/Living room/sofa 1.png");
	SDL_Surface* tmpSurfacePlantDark = IMG_Load("resource/Images/Living room/plant dark 1.png");
	SDL_Surface* tmpSurfaceFireplace = IMG_Load("resource/Images/Living room/fireplace 1.png");
	SDL_Surface* tmpSurfacePictureRock = IMG_Load("resource/Images/Living room/picture rock 1.png");
	SDL_Surface* tmpSurfaceRoundClock = IMG_Load("resource/Images/Living room/round clock 1.png");
	SDL_Surface* tmpSurfaceWriteTableAndChair = IMG_Load("resource/Images/Living room/write table and chair 1.png");
	SDL_Surface* tmpSurfaceInk = IMG_Load("resource/Images/Living room/ink 1.png");
	SDL_Surface* tmpSurfaceFortepiano = IMG_Load("resource/Images/Living room/fortepiano 1.png");
	SDL_Surface* tmpSurfaceRedCarpet = IMG_Load("resource/Images/Living room/red carpet 1.png");
	SDL_Surface* tmpSurfaceToyHorse = IMG_Load("resource/Images/Living room/toy horse 1.png");
	SDL_Surface* tmpSurfaceBall = IMG_Load("resource/Images/Living room/ball 1.png");
	SDL_Surface* tmpSurfaceBigTable = IMG_Load("resource/Images/Living room/big table 1.png");
	SDL_Surface* tmpSurfaceChairRight1 = IMG_Load("resource/Images/Living room/chair right 1.png");
	SDL_Surface* tmpSurfaceChairRight2 = IMG_Load("resource/Images/Living room/chair right 2.png");
	SDL_Surface* tmpSurfaceChairRight3 = IMG_Load("resource/Images/Living room/chair right 3.png");
	SDL_Surface* tmpSurfaceChairRight4 = IMG_Load("resource/Images/Living room/chair right 4.png");
	SDL_Surface* tmpSurfaceVaseWithRedFlowers = IMG_Load("resource/Images/Living room/vase with red flowers 1.png");
	SDL_Surface* tmpSurfaceOpenedOrangeBook = IMG_Load("resource/Images/Living room/opened orange book 1.png");
	SDL_Surface* tmpSurfacePlates = IMG_Load("resource/Images/Living room/plates 2 1.png");
	SDL_Surface* tmpSurfaceFish = IMG_Load("resource/Images/Living room/fish 1.png");
	SDL_Surface* tmpSurfaceYellowTable = IMG_Load("resource/Images/Living room/yellow table 1.png");
	SDL_Surface* tmpSurfaceWhiteChair1 = IMG_Load("resource/Images/Living room/white chair 1.png");
	SDL_Surface* tmpSurfaceWhiteChair2 = IMG_Load("resource/Images/Living room/white chair 2.png");
	SDL_Surface* tmpSurfaceRectangle = IMG_Load("resource/Images/Living room/Rectangle 5.png");
	SDL_Surface* tmpSurfaceTypeHere = IMG_Load("resource/Images/Living room/Type here.png");
	//SDL_Surface* tmpSurfaceMessage = TTF_RenderText_Solid(Sans, "Type text here", Black);

	wallTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceWall);
	floorTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceFloor);
	sockBinaryTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceSockBinary);
	tallBookcaseTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceTallBookcase);
	booksOnTheStoolTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceBooksOnTheStool);
	clockTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceClock);
	candlesTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceCandles);
	horizontalStandTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceHorizontalStand);
	radioTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceRadio);
	vaseTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceVase);
	minibarTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceMinibar);
	sofaTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceSofa);
	plantDarkTex = SDL_CreateTextureFromSurface(renderer, tmpSurfacePlantDark);
	fireplaceTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceFireplace);
	pictureRockTex = SDL_CreateTextureFromSurface(renderer, tmpSurfacePictureRock);
	roundClockTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceRoundClock);
	writeTableAndChairTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceWriteTableAndChair);
	inkTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceInk);
	fortepianoTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceFortepiano);
	redCarpetTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceRedCarpet);
	toyHorseTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceToyHorse);
	ballTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceBall);
	bigTableTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceBigTable);
	chairRight1Tex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceChairRight1);
	chairRight2Tex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceChairRight2);
	chairRight3Tex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceChairRight3);
	chairRight4Tex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceChairRight4);
	vaseWithRedFlowersTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceVaseWithRedFlowers);
	openedOrangeBookTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceOpenedOrangeBook);
	platesTex = SDL_CreateTextureFromSurface(renderer, tmpSurfacePlates);
	fishTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceFish);
	yellowTableTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceYellowTable);
	whiteChair1Tex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceWhiteChair1);
	whiteChair2Tex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceWhiteChair2);
	rectangleTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceRectangle);
	typeHereTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceTypeHere);
	//messageTex = SDL_CreateTextureFromSurface(renderer, tmpSurfaceMessage);

	SDL_FreeSurface(tmpSurfaceWall);
	SDL_FreeSurface(tmpSurfaceFloor);
	SDL_FreeSurface(tmpSurfaceSockBinary);
	SDL_FreeSurface(tmpSurfaceTallBookcase);
	SDL_FreeSurface(tmpSurfaceBooksOnTheStool);
	SDL_FreeSurface(tmpSurfaceClock);
	SDL_FreeSurface(tmpSurfaceCandles);
	SDL_FreeSurface(tmpSurfaceHorizontalStand);
	SDL_FreeSurface(tmpSurfaceRadio);
	SDL_FreeSurface(tmpSurfaceVase);
	SDL_FreeSurface(tmpSurfaceMinibar);
	SDL_FreeSurface(tmpSurfaceSofa);
	SDL_FreeSurface(tmpSurfacePlantDark);
	SDL_FreeSurface(tmpSurfaceFireplace);
	SDL_FreeSurface(tmpSurfacePictureRock);
	SDL_FreeSurface(tmpSurfaceRoundClock);
	SDL_FreeSurface(tmpSurfaceWriteTableAndChair);
	SDL_FreeSurface(tmpSurfaceInk);
	SDL_FreeSurface(tmpSurfaceFortepiano);
	SDL_FreeSurface(tmpSurfaceRedCarpet);
	SDL_FreeSurface(tmpSurfaceToyHorse);
	SDL_FreeSurface(tmpSurfaceBall);
	SDL_FreeSurface(tmpSurfaceBigTable);
	SDL_FreeSurface(tmpSurfaceChairRight1);
	SDL_FreeSurface(tmpSurfaceChairRight2);
	SDL_FreeSurface(tmpSurfaceChairRight3);
	SDL_FreeSurface(tmpSurfaceChairRight4);
	SDL_FreeSurface(tmpSurfaceVaseWithRedFlowers);
	SDL_FreeSurface(tmpSurfaceOpenedOrangeBook);
	SDL_FreeSurface(tmpSurfacePlates);
	SDL_FreeSurface(tmpSurfaceFish);
	SDL_FreeSurface(tmpSurfaceYellowTable);
	SDL_FreeSurface(tmpSurfaceWhiteChair1);
	SDL_FreeSurface(tmpSurfaceWhiteChair2);
	SDL_FreeSurface(tmpSurfaceRectangle);
	SDL_FreeSurface(tmpSurfaceTypeHere);
	//SDL_FreeSurface(tmpSurfaceMessage);


	//cnt++;
	destWallR.h = 307;
	destWallR.w = 800;
	//destR.x = cnt;

	destFloorR.h = 293;
	destFloorR.w = 800;
	destFloorR.y = 307;

	if (randomNum == 0) {
		destSockBinaryR.h = 74;
		destSockBinaryR.w = 50;
		destSockBinaryR.x = 8;
		destSockBinaryR.y = 254;
	}
	else if (randomNum == 1) {
		destSockBinaryR.h = 74;
		destSockBinaryR.w = 50;
		destSockBinaryR.x = 729;
		destSockBinaryR.y = 248;
	}
	else if (randomNum == 2) {
		destSockBinaryR.h = 74;
		destSockBinaryR.w = 50;
		destSockBinaryR.x = 177;
		destSockBinaryR.y = 254;
	}

	destTallBookcaseR.h = 161;
	destTallBookcaseR.w = 134;
	destTallBookcaseR.y = 178;

	destBooksOnTheStoolR.h = 60;
	destBooksOnTheStoolR.w = 30;
	destBooksOnTheStoolR.x = 136;
	destBooksOnTheStoolR.y = 277;

	destClockR.h = 150;
	destClockR.w = 104;
	destClockR.x = 163;
	destClockR.y = 184;

	destCandlesR.h = 114;
	destCandlesR.w = 89;
	destCandlesR.x = 227;
	destCandlesR.y = 220;

	destHorizontalStandR.h = 31;
	destHorizontalStandR.w = 132;
	destHorizontalStandR.x = 307;
	destHorizontalStandR.y = 295;

	destRadioR.h = 26;
	destRadioR.w = 56;
	destRadioR.x = 352;
	destRadioR.y = 269;

	destVaseR.h = 38;
	destVaseR.w = 30;
	destVaseR.x = 314;
	destVaseR.y = 259;

	destMinibarR.h = 97;
	destMinibarR.w = 84;
	destMinibarR.x = 352;
	destMinibarR.y = 116;

	destSofaR.h = 66;
	destSofaR.w = 150;
	destSofaR.x = 439;
	destSofaR.y = 259;

	destPlantDarkR.h = 126;
	destPlantDarkR.w = 73;
	destPlantDarkR.x = 597;
	destPlantDarkR.y = 215;

	destFireplaceR.h = 112;
	destFireplaceR.w = 127;
	destFireplaceR.x = 673;
	destFireplaceR.y = 213;

	destPictureRockR.h = 114;
	destPictureRockR.w = 85;
	destPictureRockR.x = 594;
	destPictureRockR.y = 64;

	destRoundClockR.h = 42;
	destRoundClockR.w = 40;
	destRoundClockR.x = 729;
	destRoundClockR.y = 100;

	destWriteTableAndChairR.h = 31;
	destWriteTableAndChairR.w = 100;
	destWriteTableAndChairR.x = 8;
	destWriteTableAndChairR.y = 369;

	destInkR.h = 32;
	destInkR.w = 20;
	destInkR.x = 71;
	destInkR.y = 339;

	destFortepianoR.h = 133;
	destFortepianoR.w = 150;
	destFortepianoR.x = 25;
	destFortepianoR.y = 442;

	destRedCarpetR.h = 70;
	destRedCarpetR.w = 120;
	destRedCarpetR.x = 175;
	destRedCarpetR.y = 382;

	destToyHorseR.h = 37;
	destToyHorseR.w = 43;
	destToyHorseR.x = 239;
	destToyHorseR.y = 383;

	destBallR.h = 28;
	destBallR.w = 25;
	destBallR.x = 223;
	destBallR.y = 409;

	destBigTableR.h = 134;
	destBigTableR.w = 150;
	destBigTableR.x = 392;
	destBigTableR.y = 381;

	destChairRight1R.h = 52;
	destChairRight1R.w = 30;
	destChairRight1R.x = 352;
	destChairRight1R.y = 389;

	destChairRight2R.h = 52;
	destChairRight2R.w = 30;
	destChairRight2R.x = 352;
	destChairRight2R.y = 442;

	destChairRight3R.h = 52;
	destChairRight3R.w = 29;
	destChairRight3R.x = 552;
	destChairRight3R.y = 388;

	destChairRight4R.h = 52;
	destChairRight4R.w = 29;
	destChairRight4R.x = 552;
	destChairRight4R.y = 440;

	destVaseWithRedFlowersR.h = 51;
	destVaseWithRedFlowersR.w = 30;
	destVaseWithRedFlowersR.x = 453;
	destVaseWithRedFlowersR.y = 397;

	destOpenedOrangeBookR.h = 36;
	destOpenedOrangeBookR.w = 50;
	destOpenedOrangeBookR.x = 483;
	destOpenedOrangeBookR.y = 450;

	destPlatesR.h = 38;
	destPlatesR.w = 40;
	destPlatesR.x = 413;
	destPlatesR.y = 442;

	destFishR.h = 27;
	destFishR.w = 40;
	destFishR.x = 407;
	destFishR.y = 388;

	destYellowTableR.h = 57;
	destYellowTableR.w = 120;
	destYellowTableR.x = 625;
	destYellowTableR.y = 526;

	destWhiteChair1R.h = 75;
	destWhiteChair1R.w = 42;
	destWhiteChair1R.x = 583;
	destWhiteChair1R.y = 515;

	destWhiteChair2R.h = 73;
	destWhiteChair2R.w = 42;
	destWhiteChair2R.x = 745;
	destWhiteChair2R.y = 516;

	destRectangleR.h = 50;
	destRectangleR.w = 800;
	destRectangleR.x = 0;
	destRectangleR.y = 600;

	destTypeHereR.h = 16;
	destTypeHereR.w = 144;
	destTypeHereR.x = 85;
	destTypeHereR.y = 616;
}

void handleEvents() {
	SDL_Event event;
	SDL_PollEvent(&event);

	switch(event.type) {
		case SDL_QUIT:
			isRunning = false;
			break;

		default:
			break;
	}
}

void render() {
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, wallTex, NULL, &destWallR);
	SDL_RenderCopy(renderer, floorTex, NULL, &destFloorR);
	SDL_RenderCopy(renderer, sockBinaryTex, NULL, &destSockBinaryR);
	SDL_RenderCopy(renderer, tallBookcaseTex, NULL, &destTallBookcaseR);
	SDL_RenderCopy(renderer, booksOnTheStoolTex, NULL, &destBooksOnTheStoolR);
	SDL_RenderCopy(renderer, clockTex, NULL, &destClockR);
	SDL_RenderCopy(renderer, candlesTex, NULL, &destCandlesR);
	SDL_RenderCopy(renderer, horizontalStandTex, NULL, &destHorizontalStandR);
	SDL_RenderCopy(renderer, radioTex, NULL, &destRadioR);
	SDL_RenderCopy(renderer, vaseTex, NULL, &destVaseR);
	SDL_RenderCopy(renderer, minibarTex, NULL, &destMinibarR);
	SDL_RenderCopy(renderer, sofaTex, NULL, &destSofaR);
	SDL_RenderCopy(renderer, plantDarkTex, NULL, &destPlantDarkR);
	SDL_RenderCopy(renderer, fireplaceTex, NULL, &destFireplaceR);
	SDL_RenderCopy(renderer, pictureRockTex, NULL, &destPictureRockR);
	SDL_RenderCopy(renderer, roundClockTex, NULL, &destRoundClockR);
	SDL_RenderCopy(renderer, writeTableAndChairTex, NULL, &destWriteTableAndChairR);
	SDL_RenderCopy(renderer, inkTex, NULL, &destInkR);
	SDL_RenderCopy(renderer, fortepianoTex, NULL, &destFortepianoR);
	SDL_RenderCopy(renderer, redCarpetTex, NULL, &destRedCarpetR);
	SDL_RenderCopy(renderer, toyHorseTex, NULL, &destToyHorseR);
	SDL_RenderCopy(renderer, ballTex, NULL, &destBallR);
	SDL_RenderCopy(renderer, bigTableTex, NULL, &destBigTableR);
	SDL_RenderCopy(renderer, chairRight1Tex, NULL, &destChairRight1R);
	SDL_RenderCopy(renderer, chairRight2Tex, NULL, &destChairRight2R);
	SDL_RenderCopy(renderer, chairRight3Tex, NULL, &destChairRight3R);
	SDL_RenderCopy(renderer, chairRight4Tex, NULL, &destChairRight4R);
	SDL_RenderCopy(renderer, vaseWithRedFlowersTex, NULL, &destVaseWithRedFlowersR);
	SDL_RenderCopy(renderer, openedOrangeBookTex, NULL, &destOpenedOrangeBookR);
	SDL_RenderCopy(renderer, platesTex, NULL, &destPlatesR);
	SDL_RenderCopy(renderer, fishTex, NULL, &destFishR);
	SDL_RenderCopy(renderer, yellowTableTex, NULL, &destYellowTableR);
	SDL_RenderCopy(renderer, whiteChair1Tex, NULL, &destWhiteChair1R);
	SDL_RenderCopy(renderer, whiteChair2Tex, NULL, &destWhiteChair2R);
	SDL_RenderCopy(renderer, rectangleTex, NULL, &destRectangleR);
	SDL_RenderCopy(renderer, typeHereTex, NULL, &destTypeHereR);

	SDL_RenderPresent(renderer);
}

void remove_object(char *letters) {
	int r;
	srand(time(0));
	printf("letters is %s\n", letters);

	if (!(strcmp(letters, "tall bookcase")))
		destTallBookcaseR.x = -1000;

	if (!(strcmp(letters, "clock")))
		destClockR.x = -1000;

	if (!(strcmp(letters, "ball")))
		destBallR.x = -1000;

	if (!(strcmp(letters, "red carpet")))
		destRedCarpetR.x = -1000;

	if (!(strcmp(letters, "big table")))
		destBigTableR.x = -1000;

	if (!(strcmp(letters, "books on the stool")))
		destBooksOnTheStoolR.x = -1000;

	if (!(strcmp(letters, "candles")))
		destCandlesR.x = -1000;

	if (!(strcmp(letters, "chair"))) {
		r = rand() % 4;
		if (r == 0) destChairRight1R.x = -1000;
		if (r == 1) destChairRight2R.x = -1000;
		if (r == 2) destChairRight3R.x = -1000;
		if (r == 3) destChairRight4R.x = -1000;
	}

	if (!(strcmp(letters, "fireplace")))
		destFireplaceR.x = -1000;

	if (!(strcmp(letters, "fish")))
		destFishR.x = -1000;

	if (!(strcmp(letters, "fortepiano")))
		destFortepianoR.x = -1000;

	if (!(strcmp(letters, "horizontal stand")))
		destHorizontalStandR.x = -1000;

	if (!(strcmp(letters, "ink")))
		destInkR.x = -1000;

	if (!(strcmp(letters, "minibar")))
		destMinibarR.x = -1000;

	if (!(strcmp(letters, "opened orange book")))
		destOpenedOrangeBookR.x = -1000;

	if (!(strcmp(letters, "picture rock")))
		destPictureRockR.x = -1000;

	if (!(strcmp(letters, "plant dark")))
		destPlantDarkR.x = -1000;

	if (!(strcmp(letters, "plates")))
		destPlatesR.x = -1000;

	if (!(strcmp(letters, "radio")))
		destRadioR.x = -1000;

	if (!(strcmp(letters, "sofa")))
		destSofaR.x = -1000;

	if (!(strcmp(letters, "toy horse")))
		destToyHorseR.x = -1000;

	if (!(strcmp(letters, "vase with pink flowers")))
		destVaseR.x = -1000;

	if (!(strcmp(letters, "vase with red flowers")))
		destVaseWithRedFlowersR.x = -1000;

	if (!(strcmp(letters, "white chair"))) {
		r = rand() % 2;
		if (r == 0) destWhiteChair1R.x = -1000;
		if (r == 1) destWhiteChair2R.x = -1000;
	}

	if (!(strcmp(letters, "write table and chair")))
		destWriteTableAndChairR.x = -1000;

	if (!(strcmp(letters, "round clock")))
		destRoundClockR.x = -1000;

	if (!(strcmp(letters, "yellow table")))
		destYellowTableR.x = -1000;
}

void living_room(const int width, const int height) {
	char letters[100];
	int enter = 0,
		count = 0;

    init("Find the sock", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, false);

    while (isRunning) {
		enter = 0;
		SDL_Event event;
		SDL_PollEvent(&event);

		switch(event.type) {
			case SDL_QUIT:
				isRunning = false;
				break;
			case SDL_KEYDOWN:
				count = keydown(event, letters, &enter);
				if (enter == 1) {
					remove_object(letters);
					printf("if in\n");
					for (int i = 0; i < count; i++)
						letters[i] = '\0';
					count = 0;
					printf("count after loop is %d\n", count);
				}
				break;
			case SDL_MOUSEBUTTONDOWN:
                    if (SDL_PointInRect(&(SDL_Point){event.button.x, event.button.y}, &destSockBinaryR)) {
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
}