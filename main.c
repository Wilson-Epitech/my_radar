/*
** MY_RADAR PROJECT, 2022
** bscsfml
** File description:
** graphical programming
*/

#include "includes/shortcut.h"

void game_window(RADAR_T *ALL)
{
    sfVector2f hitbox_pos = {100, 100};

    while (sfRenderWindow_isOpen(ALL->settings.window)) {
        while (sfRenderWindow_pollEvent(ALL->settings.window,
                    &ALL->settings.event)) {
            analyse_events(ALL->settings.window, ALL->settings.event);
            close_window(ALL->settings.window, ALL->settings.event);
        }
        sfRenderWindow_clear(ALL->settings.window,
                    sfColor_fromRGB(0, 0, 0));
        sfRectangleShape_setOutlineColor(ALL->hitbox.rectangle,
                    sfColor_fromRGB(218, 66, 66));
        sfRectangleShape_setPosition(ALL->hitbox.rectangle, hitbox_pos);
        sfRenderWindow_drawRectangleShape(ALL->settings.window,
                    ALL->hitbox.rectangle, NULL);
        sfRenderWindow_display(ALL->settings.window);
    }
    sfRenderWindow_destroy(ALL->settings.window);
}

int main(int ac, char **av)
{
    if (ac == 1) {
        RADAR_T ALL;
        init(&ALL);
        game_window(&ALL);
    }
    return 0;
}
