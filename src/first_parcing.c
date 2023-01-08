/*
** MY_RADAR PROJECT, 2023
** my_radar
** File description:
** first_parcing
*/

#include "../includes/lib.h"

int first_parcing(RADAR_T *ALL, int ac, char **av)
{
    FILE *stream;
    char *line = NULL;
    size_t len = 0; ssize_t nread;
    int size = 0;
    int w = 0;

    stream = fopen(av[1], "r");
    while ((nread = getline(&line, &len, stream)) != -1) {
        if (line[w] == 'A') {
            ALL->aircraft.nb_aircraft++;
        }
        if (line[w] == 'T') {
            ALL->tower.nb_tower++;
        }
    }
    free(line);
    fclose(stream);
    return 0;
}
