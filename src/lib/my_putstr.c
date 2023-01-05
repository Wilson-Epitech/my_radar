/*
** MY_RADAR PROJECT, 2022
** My_Hunter
** File description:
** my_putstr
*/

#include "../../includes/lib.h"

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return 0;
}
