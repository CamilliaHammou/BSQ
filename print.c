/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-BSQ-camillia.hammou
** File description:
** print
*/

#include <stdlib.h>

void check_lignes(char *map, int nbr)
{
    int count = 0;
    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == '\n') {
            count++;
        }
    }
    if (count - 1 != nbr) {
        exit(84);
    }
}