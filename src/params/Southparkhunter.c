/*
** EPITECH PROJECT, 2023
** B-MUL-100-LYN-1-1-myhunter-alexis.drago-beltran
** File description:
** Southparkhunter.c
*/

#include <SFML/Graphics.h>

// kill kenny //

int South_Park_Hunter(void) {
    sfVideoMode mode = {1900, 1080, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, "South Park Hunt", sfClose, NULL);
    if (!window) {
        return 84;
    }
    sfTexture *backgroundTexture = sfTexture_createFromFile("BUS_STOP.jpg", NULL);
    sfSprite *backgroundSprite = sfSprite_create();
    sfSprite_setTexture(backgroundSprite, backgroundTexture, sfTrue);
    sfTexture *spriteTexture = sfTexture_createFromFile("KennyMcCormick.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, spriteTexture, sfTrue);
    sfVector2u backgroundSize = sfTexture_getSize(backgroundTexture);
    sfVector2f backgroundScale = {(float) mode.width / backgroundSize.x, (float) mode.height / backgroundSize.y};
    sfSprite_setScale(backgroundSprite, backgroundScale);
    sfVector2u spriteSize = sfTexture_getSize(spriteTexture);
    sfVector2f spriteScale = {0.5f, 0.5f};
    sfSprite_setScale(sprite, spriteScale);
    sfVector2f spritePosition = {(float) (mode.width - spriteSize.x) / 1, (float) (mode.height - spriteSize.y) / 1};
    sfSprite_setPosition(sprite, spritePosition);
    sfVector2f spriteVelocity = {0.050f, 0.005f};
        while (sfRenderWindow_isOpen(window)) {
            sfEvent event;
            while (sfRenderWindow_pollEvent(window, &event)) {
                if (event.type == sfEvtClosed) {
                    sfRenderWindow_close(window);
                } else if (event.type == sfEvtMouseButtonPressed) {
                    sfVector2i mousePosition = sfMouse_getPositionRenderWindow(window);
                    sfFloatRect spriteBounds = sfSprite_getGlobalBounds(sprite);
                    if (sfFloatRect_contains(&spriteBounds, mousePosition.x, mousePosition.y)) {
                        sfVector2f offScreenPosition = {10.0f, 10.0f};
                        sfSprite_setPosition(sprite, offScreenPosition);
                    }
                }
            }
            sfVector2f spritePosition = sfSprite_getPosition(sprite);
            spritePosition.x += spriteVelocity.x;
            spritePosition.y += spriteVelocity.y;
            sfSprite_setPosition(sprite, spritePosition);
            if (spritePosition.x < 0 || spritePosition.x + spriteSize.x > mode.width) {
                spriteVelocity.x = -spriteVelocity.x;
            }
            if (spritePosition.y < 0 || spritePosition.y + spriteSize.y > mode.height) {
                spriteVelocity.y = -spriteVelocity.y;
            }
            sfRenderWindow_clear(window, sfBlack);
            sfRenderWindow_drawSprite(window, backgroundSprite, NULL);
            sfRenderWindow_drawSprite(window, sprite, NULL);
            sfRenderWindow_display(window);
        }
        sfSprite_destroy(sprite);
        sfTexture_destroy(spriteTexture);
        sfSprite_destroy(backgroundSprite);
        sfTexture_destroy(backgroundTexture);
        sfRenderWindow_destroy(window);

        return 0;
    }

int main(void)
{
    South_Park_Hunter();
    return 0;
}
