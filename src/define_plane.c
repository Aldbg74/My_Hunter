/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-alexis.drago-beltran
** File description:
** Plane.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "../include/define_map.h"

int vaiables(sfRenderWindow* window)
{
    sfTexture* texture = sfTexture_createFromFile("assest/plane.png", NULL);
    sfSprite* sprite = sfSprite_create();
    sfEvent event;

    sfSprite_setTexture(sprite, texture, sfTrue);
    if (!texture) {
        return 84;
    }
    return 0;
}
/*
void define_plane(sfRenderWindow* window, sfSprite *sprite, sfTexture *texture)
{
    sfEvent event;

    vaiables;
    while (sfRenderWindow_isOpen(window)) {
        vaiables;
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
    }
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
}
*/