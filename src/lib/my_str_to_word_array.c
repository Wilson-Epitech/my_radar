/*
** MY_RADAR PROJECT, 2022
** day08
** File description:
** task04
*/

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int my_strlen(char const *str);
int my_putstr(char const *str);
int my_str_isnum(char const *str);
int my_str_isalpha(char const *str);

int strlencustom(char const *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if ((str[i] < '0' || str[i] > '9')
            && (str[i] < 'a' || str[i] > 'z')
            && (str[i] < 'A' || str[i] > 'Z')) {
            nb++;
        }
        i++;
    }
    return nb + 1;
}

void fix_spaces(char const *str, int *i)
{
    while (str[(*i) + 1] == ' ') {
        (*i)++;
    }
}

char **word_array(char **result, char const *str)
{
    int x = 0;
    int y = 0;
    int i = 0;
    while (str[i] != '\0') {
        if ((str[i] < '0' || str[i] > '9')
            && (str[i] < 'a' || str[i] > 'z')
            && (str[i] < 'A' || str[i] > 'Z')) {
                fix_spaces(str, &i);
            result[x][y] = '\0';
            x++;
            y = 0;
        } else {
            result[x][y] = str[i];
            y++;
        }
        i++;
    }
    result[x][y] = '\0';
    result[x + 1] = NULL;
    return result;
}

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int count = 0;
    int nb = strlencustom(str);
    int x = 0;
    char **result = malloc(sizeof(char*) * (nb + 1));
    while (str[i] != '\0') {
        if ((str[i] < '0' || str[i] > '9')
            && (str[i] < 'a' || str[i] > 'z')
            && (str[i] < 'A' || str[i] > 'Z')) {
                fix_spaces(str, &i);
            result[x] = malloc(sizeof(char) * (count + 1));
            x++;
            count = 0;
        } else
            count ++;
        i++;
    }
    result[x] = malloc(sizeof(char) * (count + 1));
    result = word_array(result, str);
    return result;
}
