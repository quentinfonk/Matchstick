/*
** EPITECH PROJECT, 2020
** space
** File description:
** space
*/

#include <stdlib.h>

void pri(int x, int y)
{
    my_putstr("\nAI's turn...\nAI removed ");
    my_put_nbr(y);
    my_putstr(" match(es) from line ");
    my_put_nbr(x);
    my_putstr("\n");
}

int check2_bot(int x, int y, char *buffer, int p)
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
    if (c < y)
        return (4096);
    if (c < y)
        return (4096);
    return (0);
}
