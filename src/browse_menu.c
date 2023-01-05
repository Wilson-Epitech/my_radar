/*
** MY_RADAR PROJECT, 2023
** my_radar
** File description:
** browse_menu
*/

#include "../includes/lib.h"

void game_state_0(RADAR_T *ALL)
{
    if (ALL->state.game_state == 0) {
        sfRenderWindow_drawSprite(ALL->settings.window,
            ALL->sprite.bg_menu, NULL);
        if (ALL->settings.event.type == sfEvtMouseButtonPressed
            && manage_mouse_click(ALL->settings.window).y > 341
            && manage_mouse_click(ALL->settings.window).y < 379
            && manage_mouse_click(ALL->settings.window).x > 88
            && manage_mouse_click(ALL->settings.window).x < 340) {
            ALL->state.game_state = 1;
        }
        game_state_0_2(ALL);
    }
}

void game_state_0_2(RADAR_T *ALL)
{
    if (ALL->settings.event.type == sfEvtMouseButtonPressed
        && manage_mouse_click(ALL->settings.window).y > 510
        && manage_mouse_click(ALL->settings.window).y < 526
        && manage_mouse_click(ALL->settings.window).x > 148
        && manage_mouse_click(ALL->settings.window).x < 268) {
        ALL->state.game_state = 2;
    }
    if (ALL->settings.event.type == sfEvtMouseButtonPressed
        && manage_mouse_click(ALL->settings.window).y > 678
        && manage_mouse_click(ALL->settings.window).y < 696
        && manage_mouse_click(ALL->settings.window).x > 164
        && manage_mouse_click(ALL->settings.window).x < 258) {
        sfRenderWindow_close(ALL->settings.window);
    }
}

void game_state_1(RADAR_T *ALL)
{
    if (ALL->state.game_state == 1) {
        sfRenderWindow_drawSprite(ALL->settings.window, ALL->sprite.bg, NULL);
        draw_sprite(ALL);
    }
}

void game_state_2(RADAR_T *ALL)
{
    if (ALL->state.game_state == 2) {
        sfRenderWindow_drawSprite(ALL->settings.window,
            ALL->sprite.rules_menu, NULL);
        if (ALL->settings.event.type == sfEvtMouseButtonPressed
            && manage_mouse_click(ALL->settings.window).y > 683
            && manage_mouse_click(ALL->settings.window).y < 720
            && manage_mouse_click(ALL->settings.window).x > 210
            && manage_mouse_click(ALL->settings.window).x < 510) {
            ALL->state.game_state = 0;
        }
        if (ALL->settings.event.type == sfEvtMouseButtonPressed
            && manage_mouse_click(ALL->settings.window).y > 808
            && manage_mouse_click(ALL->settings.window).y < 824
            && manage_mouse_click(ALL->settings.window).x > 311
            && manage_mouse_click(ALL->settings.window).x < 407) {
            sfRenderWindow_close(ALL->settings.window);
        }
    }
}

int browse_menu(RADAR_T *ALL)
{
    game_state_0(ALL);
    game_state_1(ALL);
    game_state_2(ALL);
    return 0;
}
