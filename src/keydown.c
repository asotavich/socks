#include "../inc/header.h"

int keydown(SDL_Event e, char *letters, int *enter) {
    static int count = 0;
    if (letters[0] == '\0') count = 0;
    switch (e.key.keysym.sym) {
        case SDLK_a:
            letters[count] = 'a';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_b:
            letters[count] = 'b';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_c:
            letters[count] = 'c';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_d:
            letters[count] = 'd';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_e:
            letters[count] = 'e';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_f:
            letters[count] = 'f';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_g:
            letters[count] = 'g';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_h:
            letters[count] = 'h';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_i:
            letters[count] = 'i';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_j:
            letters[count] = 'j';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_k:
            letters[count] = 'k';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_l:
            letters[count] = 'l';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_m:
            letters[count] = 'm';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_n:
            letters[count] = 'n';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_o:
            letters[count] = 'o';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_p:
            letters[count] = 'p';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_q:
            letters[count] = 'q';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_r:
            letters[count] = 'r';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_s:
            letters[count] = 's';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_t:
            letters[count] = 't';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_u:
            letters[count] = 'u';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_v:
            letters[count] = 'v';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_w:
            letters[count] = 'w';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_x:
            letters[count] = 'x';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_y:
            letters[count] = 'y';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_z:
            letters[count] = 'z';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_BACKSPACE:
            letters[--count] = '\0';
            //printf("%c\n", letters[count]);
            //count++;
            break;

        case SDLK_SPACE:
            letters[count] = ' ';
            printf("%c\n", letters[count]);
            count++;
            break;

        case SDLK_KP_ENTER:
            //function disapear
            printf("you pressed enter\n");
            *enter = 1;
            ///remove_object(letters, count);
            /*for (int i = 0; i < count; i++)
                letters[i] = '\0';
            count = 0;*/

        default:
            break;
    }
    printf("count = %d\n", count);

    return count;
}
