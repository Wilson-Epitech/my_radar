/*
** MY_RADAR PROJECT, 2022
** bsmy_radar
** File description:
** init
*/

#include "../includes/lib.h"
#include "../includes/struct.h"

void init_window(RADAR_T *ALL)
{
    ALL->settings.video_mode.bitsPerPixel = 32;
    ALL->settings.video_mode.height = 1080;
    ALL->settings.video_mode.width = 1920;
    ALL->settings.window = sfRenderWindow_create(ALL->settings.video_mode,
                "My_Radar", sfResize | sfClose, NULL);
}

void init_sprite(RADAR_T *ALL)
{
    ALL->texture.texture_bg =
        sfTexture_createFromFile("src/ressources/wp1936897.jpg", NULL);
    ALL->sprite.bg = sfSprite_create();
    ALL->texture.texture_aircraft =
        sfTexture_createFromFile("src/ressources/plane.png", NULL);
    ALL->sprite.sp_aircraft = sfSprite_create();
    ALL->texture.texture_tower =
        sfTexture_createFromFile("src/ressources/tower.png", NULL);
    ALL->sprite.sp_tower = sfSprite_create();
    ALL->texture.texture_bg_menu =
        sfTexture_createFromFile("src/ressources/menu1.png", NULL);
    ALL->sprite.bg_menu = sfSprite_create();
    ALL->texture.texture_rules_menu =
        sfTexture_createFromFile("src/ressources/rules_menu.png", NULL);
    ALL->sprite.rules_menu = sfSprite_create();
}

void init_sprite_texture(RADAR_T *ALL)
{
    sfSprite_setTexture(ALL->sprite.bg,
        ALL->texture.texture_bg, sfTrue);
    sfSprite_setTexture(ALL->sprite.sp_aircraft,
        ALL->texture.texture_aircraft, sfTrue);
    sfSprite_setTexture(ALL->sprite.sp_tower,
        ALL->texture.texture_tower, sfTrue);
    sfSprite_setTexture(ALL->sprite.bg_menu,
        ALL->texture.texture_bg_menu, sfTrue);
    sfSprite_setTexture(ALL->sprite.rules_menu,
        ALL->texture.texture_rules_menu, sfTrue);
}

void init_sprite_action(RADAR_T *ALL)
{
    ALL->sprite_action.size_bg.x = 3;
    ALL->sprite_action.size_bg.y = 3;
    sfSprite_scale(ALL->sprite.bg, ALL->sprite_action.size_bg);
    ALL->sprite_action.size_sp_tower.x = 0.10;
    ALL->sprite_action.size_sp_tower.y = 0.10;
    sfSprite_scale(ALL->sprite.sp_tower, ALL->sprite_action.size_sp_tower);
    ALL->sprite_action.size_sp_aircraft.x = 0.10;
    ALL->sprite_action.size_sp_aircraft.y = 0.10;
    sfSprite_scale(ALL->sprite.sp_aircraft,
        ALL->sprite_action.size_sp_aircraft);
    ALL->sprite_action.size_bg_menu.x = 1;
    ALL->sprite_action.size_bg_menu.y = 0.9;
    sfSprite_scale(ALL->sprite.bg_menu, ALL->sprite_action.size_bg_menu);
    ALL->sprite_action.size_rules_menu.x = 1;
    ALL->sprite_action.size_rules_menu.y = 0.9;
    sfSprite_scale(ALL->sprite.rules_menu, ALL->sprite_action.size_rules_menu);
}

void init(RADAR_T *ALL)
{
    init_window(ALL);
    init_sprite(ALL);
    init_sprite_texture(ALL);
    init_sprite_action(ALL);
}
