/*
** EPITECH PROJECT, 2020
** map
** File description:
** map
*/

#include <stdlib.h>

int vstr(char *str)
{
    if (str[0] == '\n')
        return (1);
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            if (str [i] != '\n')
                return (1);
    return (0);
}

char *map(char *buffer, int i, int a, int p)
{
    for (; a + a + 1 != i; i++)
        buffer[i] = '*';
    buffer[i] = '\n';
    i++;
    for (int o = 0; a != o; o++, i+=2) {
        buffer[i] = '*';
        i++;
        for (int b = 0; b != a-o-1; b++, i++)
            buffer[i] = ' ';
        for (int b = 0; b != o+o+1; b++, i++)
            buffer[i] = '|';
        for (int b = 0; b != a-o-1; b++, i++)
            buffer[i] = ' ';
        buffer[i] = '*';
        buffer[i+1] = '\n';
    }
    for (int b = 0; a + a + 1 != b; b++, i++)
        buffer[i] = '*';
    buffer[i] = '\n';
    buffer[i+1] = '\0';
    return (buffer);
}
