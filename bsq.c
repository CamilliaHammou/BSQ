/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-BSQ-camillia.hammou
** File description:
** bsq
*/

#include <stdio.h>
#include <stdlib.h>

int fs_open_file(char const *filepath);

void my_putchar(char c);

char *fs_read_file(int fs, char const *filepath);

int my_get_nbr(char *str);

int file_size(char const *filpath);

void check_lignes(char *map, int nbr);

void find_square(char *buff)
{
    int i = 0;
    while (buff[i] != '\0') {
        if (buff[i] == '.' ) {
            buff[i] = 'x';
        }
        i++;
    }
}

int main(int ac, char **av)
{
    char *filepath = av[1];
    int file_descriptor = fs_open_file(filepath);
    char *test = fs_read_file(file_descriptor, filepath);
    char *number = malloc(sizeof(char) * 20);
    int i = 0;
    if (test[0] == '\0')
        return (84);
    while (test[i] != '\n' && test[i] != '\0') {
        number[i] = test[i];
        i++;
    }
    int size = my_get_nbr(number);
    check_lignes(test, size);
    find_square(test);
    for (int a = i + 1; test[a] != '\0'; a++) {
        my_putchar(test[a]);
    }
}