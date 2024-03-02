/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-alexis.drago-beltran
** File description:
** my_radar.h
*/

#ifndef MY_RADAR_
    #define MY_RADAR_

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
