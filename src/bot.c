/*
** EPITECH PROJECT, 2020
** bot
** File description:
** bot
*/

#include <stdlib.h>

int line2(int x, int a, char *str)
{
    int check = 0;

    my_putstr("Line: ");
    str = str_get(str);
    if (str == NULL)
        return (84);
    check = vstr(str);
    if (check == 0) {
        x = my_getnbr(0, str);
        if (a >= x && x != 0 && x > 0 && x < 1000)
            return (x);
        else
            my_putstr("Error: this line is out of range\n");
    }
    else
        my_putstr("Error: invalid input (positive number expected)\n");
    return (x);
}

int line(int x, int a)
{
    char *str;

    while (a < x || x == 0 || x > 1000 || x < 0) {
        x = line2(x, a, str);
        if (x == 84)
            return (84);
    }
    return (x);
}

int check_win(char *buffer, int a, int p)
{
    if ((lin(buffer)) == 1 && (mast(buffer)) <= p+1 && (mast(buffer)) != 1) {
        return (1);
    }
    return (0);
}

int chec_line(char *buffer)
{
    int a = 0;

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n')
            a++;
        if (buffer[i] == '|')
            return (a);
    }
    return (a);
}

char *bot(char *buffer, int a, int p)
{
    int x = 0;
    int y = 0;
    int check = 4096;

    if ((lin(buffer)) == 1 && (mast(buffer)) <= p+1 && (mast(buffer)) != 1) {
        x = li(buffer);
        y = mast(buffer) -1;
    }
    else
        while (check == 4096) {
            x = chec_line(buffer);
            y = 1;
            check = check2_bot(x, y, buffer, p);
        }
    pri(x, y);
    buffer = juga(buffer, x, y);
    return (buffer);
}
