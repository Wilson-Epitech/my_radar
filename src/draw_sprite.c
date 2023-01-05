/*
** MY_RADAR PROJECT, 2023
** my_radar
** File description:
** draw_sprites
*/

#include "../includes/lib.h"

int draw_sprite(RADAR_T *ALL)
{
    if (ALL->tower.tower == 1) {
        sfRenderWindow_drawCircleShape(ALL->settings.window,
            ALL->hitbox.circle, NULL);
        sfRenderWindow_drawSprite(ALL->settings.window,
            ALL->sprite.sp_tower, NULL);
    }
    if (ALL->aircraft.aircraft == 1) {
        sfRenderWindow_drawSprite(ALL->settings.window,
            ALL->sprite.sp_aircraft, NULL);
    }
    return 0;
}
