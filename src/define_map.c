/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myradar-alexis.drago-beltran
** File description:
** define_map.c
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>


int sp_blc(sfRenderWindow *window, sfSprite *sprite)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
        return sfRenderWindow_isOpen(window);
}

int define_map(void)
{
    sfVideoMode mode = {2000, 1119, 32};
    sfRenderWindow *window = sfRenderWindow_create
            (mode, "My_Radar", sfResize | sfClose, NULL);
    sfTexture* texture = sfTexture_createFromFile
            ("assest/IAX10-0027.jpg", NULL);
    sfSprite* sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, sfTrue);
    while (sp_blc(window, sprite)){
    }
    sfRenderWindow_destroy(window);
    return 0;
}

int main(void)
{
    define_map();
  return 0;
}