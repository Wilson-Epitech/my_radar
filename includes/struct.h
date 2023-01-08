/*
** MY_RADAR PROJECT, 2022
** My_Hunter
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct WINDOW_GAME {
        sfRenderWindow *window;
        sfVideoMode video_mode;
        sfEvent event;
    } WINDOW_GAME_T;

    typedef struct SPRITE {
        sfSprite *bg;
        sfSprite *bg_menu;
        sfSprite *rules_menu;
        sfSprite *sp_aircraft;
        sfSprite *sp_tower;
    } SPRITE_T;

    typedef struct TEXTURE_GAME {
        sfTexture *texture_bg;
        sfTexture *texture_bg_menu;
        sfTexture *texture_rules_menu;
        sfTexture *texture_aircraft;
        sfTexture *texture_tower;
    } TEXTURE_GAME_T;

    typedef struct SPRITE_ACTION {
        sfVector2f size_bg;
        sfVector2f size_bg_menu;
        sfVector2f size_rules_menu;
        sfVector2f size_sp_aircraft;
        sfVector2f size_sp_tower;
        sfVector2f aircraft_pos;
        sfVector2f tower_pos;
    } SPRITE_ACTION_T;

    typedef struct HITBOX {
        sfCircleShape *circle;
        sfVector2f circle_position;
        sfRectangleShape *rectangle;
        sfVector2f rectangle_position;
    } HITBOX_T;

    typedef struct STATE {
        int game_state;
    } STATE_T;

    typedef struct AIRCRAFT {
        int i;
        int aircraft;
        int nb_aircraft;
        sfVector2f aircraft_pos_departure;
        sfVector2f aircraft_pos_arrival;
        sfVector2f aircraft_get_pos;
        int aircraft_speed;
        int aircraft_delay;
    } AIRCRAFT_T;

    typedef struct TOWER {
        int y;
        int tower;
        int nb_tower;
        sfVector2f tower_pos;
        sfVector2f tower_get_pos;
        int tower_radius;
    } TOWER_T;

    typedef struct RADAR {
        WINDOW_GAME_T settings;
        HITBOX_T hitbox;
        STATE_T state;
        SPRITE_T sprite;
        SPRITE_ACTION_T sprite_action;
        TEXTURE_GAME_T texture;
        AIRCRAFT_T aircraft;
        TOWER_T tower;
    } RADAR_T;

#endif //struct
