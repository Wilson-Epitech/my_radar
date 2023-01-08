/*
** MY_RADAR PROJECT, 2023
** my_radar
** File description:
** init2
*/

#include "../includes/lib.h"

void init_state(RADAR_T *ALL)
{
    ALL->state.game_state = 0;
}

void init_hitbox(RADAR_T *ALL)
{
    ALL->hitbox.circle = sfCircleShape_create();
    sfCircleShape_setRadius(ALL->hitbox.circle, 100);
    sfCircleShape_setOutlineColor(ALL->hitbox.circle,
            sfColor_fromRGB(218, 250, 255));
    sfCircleShape_setOutlineThickness(ALL->hitbox.circle, 5);
    sfCircleShape_setFillColor(ALL->hitbox.circle,
        sfColor_fromRGBA(218, 250, 255, 100));

    ALL->hitbox.rectangle = sfRectangleShape_create();
    sfRectangleShape_setSize(ALL->hitbox.rectangle, (sfVector2f){20, 20});
    sfRectangleShape_setOutlineColor(ALL->hitbox.rectangle,
        sfColor_fromRGB(218, 66, 66));
    sfRectangleShape_setOutlineThickness(ALL->hitbox.rectangle, 2);
    sfRectangleShape_setFillColor(ALL->hitbox.rectangle,
        sfColor_fromRGBA(0, 0, 0, 0));
}

void init_aircraft(RADAR_T *ALL)
{
    ALL->aircraft.i = 0;
    ALL->aircraft.aircraft = 0;
    ALL->aircraft.nb_aircraft = 0;
    ALL->aircraft.aircraft_get_pos =
    sfSprite_getPosition(ALL->sprite.sp_aircraft);
}

void init_tower(RADAR_T *ALL)
{
    ALL->tower.y = 0;
    ALL->tower.tower = 0;
    ALL->tower.nb_tower = 0;
}

void init2(RADAR_T *ALL)
{
    init_state(ALL);
    init_hitbox(ALL);
    init_aircraft(ALL);
    init_tower(ALL);
}
