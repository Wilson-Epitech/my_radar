/*
** MY_RADAR PROJECT, 2022
** My_Hunter
** File description:
** struct
*/

#include "shortcut.h"

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct WINDOW_GAME {
        sfRenderWindow *window;
        sfVideoMode video_mode;
        sfEvent event;
    } WINDOW_GAME_T;

    typedef struct HITBOX {
        sfRectangleShape *rectangle;
        sfVector2f rectangle_position;
    } HITBOX_T;

    typedef struct RADAR {
        WINDOW_GAME_T settings;
        HITBOX_T hitbox;
    } RADAR_T;

#endif //struct
