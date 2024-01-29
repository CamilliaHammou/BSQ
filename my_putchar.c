/*
** EPITECH PROJECT, 2021
** mt_putchar
** File description:
** put char
*/
#include<unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}
