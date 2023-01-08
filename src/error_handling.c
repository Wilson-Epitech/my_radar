/*
** MY_RADAR PROJECT, 2023
** my_radar
** File description:
** error_handling
*/

#include "../includes/lib.h"

int error_loop(int ac, char **av)
{
    if (ac == 1) {
        return 84;
    }
    if (ac == 2 && (av[1][0] == '-' && av[1][1] != 'h')) {
        return 84;
    }
    return 0;
}
