/*
** MY_RADAR PROJECT, 2023
** my_radar
** File description:
** init_pos
*/

#include "../includes/lib.h"

void init_pos(RADAR_T *ALL,
AIRCRAFT_T aircraft[ALL->aircraft.nb_aircraft],
TOWER_T tower[ALL->tower.nb_tower])
{
    for (int i = 0; i < ALL->aircraft.nb_aircraft; i++) {
        ALL->sprite_action.aircraft_pos.x =
            aircraft[i].aircraft_pos_departure.x;
        ALL->sprite_action.aircraft_pos.y =
            aircraft[i].aircraft_pos_departure.y;
    }
    for (int x = 0; x < ALL->tower.nb_tower; x++) {
        ALL->sprite_action.tower_pos.x = tower[x].tower_pos.x;
        ALL->sprite_action.tower_pos.y = tower[x].tower_pos.y;
    }
    sfSprite_setPosition(ALL->sprite.sp_aircraft,
        ALL->sprite_action.aircraft_pos);
    sfSprite_setPosition(ALL->sprite.sp_tower, ALL->sprite_action.tower_pos);
    ALL->hitbox.rectangle_position.x = ALL->sprite_action.aircraft_pos.x;
    ALL->hitbox.rectangle_position.y = ALL->sprite_action.aircraft_pos.y;
    sfSprite_setPosition(ALL->hitbox.rectangle, ALL->hitbox.rectangle_position);
    ALL->hitbox.circle_position.x = ALL->sprite_action.tower_pos.x - 100;
    ALL->hitbox.circle_position.y = ALL->sprite_action.tower_pos.y - 100;
    sfSprite_setPosition(ALL->hitbox.circle, ALL->hitbox.circle_position);
}
