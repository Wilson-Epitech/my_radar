/*
** MY_RADAR PROJECT, 2022
** bsmy_radar
** File description:
** shortcut
*/

#ifndef LIB_H_
    #define LIB_H_
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics/RectangleShape.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include "struct.h"

sfVector2i manage_mouse_click(sfRenderWindow *window);
void close_window(sfRenderWindow *window, sfEvent event);
void analyse_events(sfRenderWindow *window, sfEvent event);
void init(RADAR_T *ALL);
void init2(RADAR_T *ALL);
int my_getnbr(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
int error_loop(RADAR_T *ALL, int ac, char**av);
int func_getline(RADAR_T *ALL, int ac, char **av);
char **my_str_to_word_array(char const *str);
int draw_sprite(RADAR_T *ALL);
int browse_menu(RADAR_T *ALL);
#endif //shortcut.h
