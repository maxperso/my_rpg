/*
** EPITECH PROJECT, 2022
** mineRPG
** File description:
** fonction
*/

#include "../../include/struct.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char *str)
{
    int i = 0;

    if (str[0] == '0') {
        my_putchar('0');
        return (0);
    }
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}