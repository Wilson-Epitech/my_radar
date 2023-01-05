/*
** MY_RADAR PROJECT, 2022
** My_Hunter
** File description:
** mouse_pos
*/

#include "../includes/lib.h"

sfVector2i manage_mouse_click(sfRenderWindow *window)
{
        sfVector2i mouse;
        mouse = sfMouse_getPositionRenderWindow(window);
        return mouse;
}
