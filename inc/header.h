#ifndef HEADERFILE_H
#define HEADERFILE_H

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

void prehistory(const int width, const int height);
int rooms(const int width, const int height);
int socks(const int width, const int height);
void rules(const int width, const int height);
void team(const int width, const int height);
void win(const int width, const int height);
void lose(const int width, const int height);
int keydown(SDL_Event e, char *letters, int *enter);
void living_room(const int width, const int height);
void bath(const int width, const int height);
void menu(const int width, const int height);
void kitchen(const int width, const int height);
void help(const int width, const int height);
void help_kitchen(const int width, const int height);
void help_living_room(const int width, const int height);
void help_bath(const int width, const int height);
SDL_Window *game_init(const char *title, const int width, const int height);
void clean(SDL_Window *window, SDL_Renderer *redenderer);

#endif
