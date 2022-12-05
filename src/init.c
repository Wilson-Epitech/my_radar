/*
** MY_RADAR PROJECT, 2022
** bsmy_radar
** File description:
** init
*/

#include "../includes/shortcut.h"
#include "../includes/struct.h"

void init_window(RADAR_T *ALL)
{
    ALL->settings.video_mode.bitsPerPixel = 32;
    ALL->settings.video_mode.height = 865;
    ALL->settings.video_mode.width = 1536;
    ALL->settings.window = sfRenderWindow_create(ALL->settings.video_mode,
                "My_Hunter", sfResize | sfClose, NULL);
}

int init_hitbox(RADAR_T *ALL)
{
    ALL->hitbox.rectangle = sfRectangleShape_create();
    sfRectangleShape_setSize(ALL->hitbox.rectangle, (sfVector2f){60, 60});
    sfRectangleShape_setOutlineColor(ALL->hitbox.rectangle,
                sfColor_fromRGBA(218, 66, 66, 0.5));
    sfRectangleShape_setOutlineThickness(ALL->hitbox.rectangle, 5);
    sfRectangleShape_setFillColor(ALL->hitbox.rectangle,
                sfColor_fromRGBA(0, 0, 0, 0));
    sfSprite_setPosition(ALL->hitbox.rectangle, ALL->hitbox.rectangle_position);
    ALL->hitbox.rectangle_position.x = 0;
    ALL->hitbox.rectangle_position.y = 0;
    return 0;
}

void init(RADAR_T *ALL)
{
    init_window(ALL);
    init_hitbox(ALL);
}
