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

int remplissage_struct(RADAR_T *ALL, char *line)
{
    int size = 0;
    char **tab;

    size = my_strlen(line);
    tab = malloc(sizeof(size + 1));
    tab = my_str_to_word_array(line);
    int x = 0;
    for (x; line[x] != '\0'; x++) {
        remplissage_struct_2(ALL, line, tab, x);
    }
}

int remplissage_struct_2(RADAR_T *ALL, char *line, char **tab, int x)
{
    if (line[x] == 'A') {
        printf("Aircraft\n");
        ALL->aircraft.aircraft = 1;
        ALL->aircraft.nb_aircraft++;
        ALL->aircraft.aircraft_pos_departure.x = my_getnbr(tab[2]);
        ALL->aircraft.aircraft_pos_departure.y = my_getnbr(tab[3]);
        ALL->aircraft.aircraft_pos_arrival.x = my_getnbr(tab[5]);
        ALL->aircraft.aircraft_pos_arrival.y = my_getnbr(tab[6]);
        ALL->aircraft.aircraft_speed = my_getnbr(tab[8]);
        ALL->aircraft.aircraft_delay = my_getnbr(tab[10]);
    }
    if (line[x] == 'T') {
        printf("Tower\n");
        ALL->tower.tower = 1;
        ALL->tower.nb_tower++;
        ALL->tower.tower_pos.x = my_getnbr(tab[2]);
        ALL->tower.tower_pos.y = my_getnbr(tab[3]);
        ALL->tower.tower_radius = my_getnbr(tab[5]);
    }
    return 0;
}

int func_getline(RADAR_T *ALL, int ac, char **av)
{
    FILE *stream;
    char *line = NULL;
    size_t len = 0; ssize_t nread;

    stream = fopen(av[1], "r");
    while ((nread = getline(&line, &len, stream)) != -1) {
        fwrite(line, nread, 1, stdout);
        remplissage_struct(ALL, line);
    }
    printf("nb tower: %d\n", ALL->tower.nb_tower);
    printf("nb aircraft: %d\n", ALL->aircraft.nb_aircraft);
    printf("air craft pos.X : %f\n", ALL->aircraft.aircraft_pos_departure.x);
    printf("air craft pos.Y : %f\n", ALL->aircraft.aircraft_pos_departure.y);
    printf("air craft pos arrival.Y : %f\n",
        ALL->aircraft.aircraft_pos_arrival.x);
    printf("air craft pos arrival.Y : %f\n",
        ALL->aircraft.aircraft_pos_arrival.y);
    free(line);
    fclose(stream);
    return 0;
}
