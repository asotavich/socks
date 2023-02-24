all:
	clang  -I resource/include -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf -o main src/*.c