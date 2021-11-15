/*
** EPITECH PROJECT, 2020
** play
** File description:
** play
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

char *juga(char *buffer, int x, int y)
{
    int i = 0;
    int b = 0;

    for (; buffer[i] != '\n'; i++);
    i++;
    b = x * i;
    b = b + i;
    for (; buffer[b] != '|' && buffer[b] != '\0'; b--);
    for (; y != 0; y--, b--)
        buffer[b] = ' ';
    return (buffer);
}

char *play(int a, int p, char *buffer)
{
    int x = 0;
    int y = 0;
    int check = 0;

    x = line(x, a);
    if (x == 84)
        return (NULL);
    y = match(y, p);
    if (y == 84)
        return (NULL);
    check = check2(x, y, buffer, p);
    if (y == 4096 || check == 4096) {
        play(a, p, buffer);
        return (buffer);
    }
    buffer = juga(buffer, x, y);
    pr(x, y);
    my_putstr(buffer);
    return (buffer);
}

int check2(int x, int y, char *buffer, int p)
{
    int i = 0;
    int b = 0;
    int c = 0;

    for (; buffer[i] != '\n'; i++);
    i++;
    b = x * i;
    b = b + i;
    b -= 3;
    for (; buffer[b] != '|' && buffer[b] != '\0' && buffer[b] != '*'; b--);
    for (; buffer[b] == '|'; c++, b--);
    if (c < y) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(p);
        my_putstr(" matches per turn\n");
        return (4096);
    }
    if (c < y)
        return (4096);
    return (0);
}

int match(int y, int p)
{
    char *str;

    while (p < y || y == 0 || y > 1000 || y < 0) {
        y = match2(y, p, str);
        if (y == 84)
            return (84);
        if (y > 100)
            return (4096);
    }
    return (y);
}

char *str_get(char *str)
{
    size_t len = 0;
    ssize_t read;

    str = NULL;
    read = getline(&str, &len, stdin);
    if (str[0] == '\0')
        return (NULL);
    return (str);
}
