/*
** MY_RADAR PROJECT, 2022
** bscsfml
** File description:
** graphical programming
*/

#include "includes/lib.h"

void game_window(RADAR_T *ALL)
{
    sfVector2f hitbox_pos = {93, 47};

    while (sfRenderWindow_isOpen(ALL->settings.window)) {
        while (sfRenderWindow_pollEvent(ALL->settings.window,
                    &ALL->settings.event)) {
            analyse_events(ALL->settings.window, ALL->settings.event);
            close_window(ALL->settings.window, ALL->settings.event);
        }
        sfRenderWindow_clear(ALL->settings.window, sfColor_fromRGB(0, 0, 0));
        browse_menu(ALL);
        sfRenderWindow_display(ALL->settings.window);
    }
    sfRenderWindow_destroy(ALL->settings.window);
}

int flag_h(void)
{
    const char *flag_h_info = "\n Hi\n this is my game,\n"
    "you can find as a menu: play menu, escape menu (in game)"
    ", game over menu(after losing the game).\n"
    "Good game and good luck\n\n";

    my_putstr(flag_h_info);
    return 0;
}

int main(int ac, char **av)
{
    RADAR_T ALL;
    init(&ALL);
    init2(&ALL);
    int error = error_loop(ac, av);
    if (error == 84) {
        return 84;
    }
    if (ac == 2 && ( av[1][0] == '-' && av[1][1] == 'h')) {
        flag_h();
        return 0;
    }
    first_parcing(&ALL, ac, av);
    TOWER_T tower[ALL.aircraft.nb_aircraft];
    AIRCRAFT_T aircraft[ALL.tower.nb_tower];
    func_getline(&ALL, av, aircraft, tower);
    init_pos(&ALL, aircraft, tower);
    manage_mouse_click(ALL.settings.window);
    if (ac == 2 && av[1][0] != '-') {
        game_window(&ALL);
    }
    return 0;
}
