/*
** EPITECH PROJECT, 2021
** step1
** File description:
** fs_open_file
*/

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int my_putstr(char const *str);

int my_get_nbr(char *str);

int file_size(char const *filpath)
{
    struct stat *stats = malloc(sizeof(struct stat));
    stat(filpath, stats);
    return stats->st_size;
}

int fs_open_file(char const *filepath)
{
    int fs = open(filepath, O_RDONLY);
    if (fs == -1) {
        exit(84);
    }
    return (fs);
}

char *fs_read_file(int fs, char const *filepath)
{
    char *check_file = malloc(sizeof(char) * (file_size(filepath) + 500));
    int precision = 20;
    char temporary[precision];
    int countpos = 0;
    while (precision > 0) {
        precision = read(fs, temporary, precision);
        for (int i = 0; i < precision; i++) {
            check_file[countpos++] = temporary[i];
        }
    }
    close(fs);
    return (check_file);
}
