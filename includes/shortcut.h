/*
** MY_RADAR PROJECT, 2022
** bsmy_radar
** File description:
** shortcut
*/

#ifndef SHORTCUT_H_
    #define SHORTCUT_H_
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics/RectangleShape.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include "struct.h"

    // #define WINDOW ALL->settings.window

sfVector2i manage_mouse_click(sfRenderWindow *window);
void close_window(sfRenderWindow *window, sfEvent event);
void analyse_events(sfRenderWindow *window, sfEvent event);
void init(RADAR_T *ALL);
int my_putstr(char const *str);
void my_putchar(char c);
#endif //shortcut.h
