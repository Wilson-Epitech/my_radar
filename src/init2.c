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
        sfColor_fromRGBA(88, 231, 231, 0.5));
    sfCircleShape_setOutlineThickness(ALL->hitbox.circle, 5);
    sfCircleShape_setFillColor(ALL->hitbox.circle,
        sfColor_fromRGBA(218, 250, 255, 100));
    sfSprite_setPosition(ALL->hitbox.circle, ALL->hitbox.circle_position);
    ALL->hitbox.circle_position.x = 0;
    ALL->hitbox.circle_position.y = 0;
}

void init_aircraft(RADAR_T *ALL)
{
    ALL->aircraft.aircraft = 0;
    ALL->aircraft.nb_aircraft = 0;
}

void init_tower(RADAR_T *ALL)
{
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
