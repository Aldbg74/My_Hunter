/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myhunter-alexis.drago-beltran
** File description:
** my_hunter.h
*/

#ifndef MY_HUNTER_H_
#define MY_HUNTER_H_

#include <SFML/Graphics.h>

typedef struct game_s {
    sfRenderWindow *window;
    sfEvent event;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfVector2f move;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    float seconds;
    int score;
    sfText *text;
    sfFont *font;
    sfVector2f text_pos;
} game_t;

#endif