/*
** MY_RADAR PROJECT, 2023
** my_radar
** File description:
** getline
*/

#include "../includes/lib.h"

int my_strlen(const char *str)
{
    int x = 0;

    while (str[x] != '\0') {
        x++;
    }
    return x;
}

int fill_aircraft(RADAR_T *ALL, char **tab,
    AIRCRAFT_T aircraft[ALL->aircraft.nb_aircraft])
{
        aircraft[ALL->aircraft.i].aircraft = 1;
        aircraft[ALL->aircraft.i].aircraft_pos_departure.x = my_getnbr(tab[1]);
        aircraft[ALL->aircraft.i].aircraft_pos_departure.y = my_getnbr(tab[2]);
        aircraft[ALL->aircraft.i].aircraft_pos_arrival.x = my_getnbr(tab[3]);
        aircraft[ALL->aircraft.i].aircraft_pos_arrival.y = my_getnbr(tab[4]);
        aircraft[ALL->aircraft.i].aircraft_speed = my_getnbr(tab[5]);
        aircraft[ALL->aircraft.i].aircraft_delay = my_getnbr(tab[6]);
        ALL->aircraft.i++;
    return 0;
}

int fill_tower(RADAR_T *ALL, char **tab, TOWER_T tower[ALL->tower.nb_tower])
{
    tower[ALL->tower.y].tower = 1;
    tower[ALL->tower.y].tower_pos.x = my_getnbr(tab[1]);
    tower[ALL->tower.y].tower_pos.y = my_getnbr(tab[2]);
    tower[ALL->tower.y].tower_radius = my_getnbr(tab[3]);
    ALL->tower.y++;
    return 0;
}

void func_getline(RADAR_T *ALL, char **av,
AIRCRAFT_T aircraft[ALL->aircraft.nb_aircraft],
TOWER_T tower[ALL->tower.nb_tower])
{
    FILE *stream; char *line = NULL;
    size_t len = 0; ssize_t nread;
    int size = 0; char **tab;
    int w = 0;
    stream = fopen(av[1], "r");
    while ((nread = getline(&line, &len, stream)) != -1) {
        size = my_strlen(line);
        tab = malloc(sizeof(size + 1));
        tab = my_str_to_word_array(line);
        if (line[w] == 'A') {
            fill_aircraft(ALL, tab, aircraft);
        }
        if (line[w] == 'T') {
            fill_tower(ALL, tab, tower);
        }
    }
    free(line); fclose(stream);
}
