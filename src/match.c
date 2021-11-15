/*
** EPITECH PROJECT, 2020
** match
** File description:
** match
*/

#include <stdlib.h>

void pr(int x, int y)
{
    my_putstr("Player removed ");
    my_put_nbr(y);
    my_putstr(" match(es) from line ");
    my_put_nbr(x);
    my_putstr("\n");
}

int match2(int y, int p, char *str)
{
    int check = 0;

    my_putstr("Matches: ");
    str = str_get(str);
    if (str == NULL)
        return (84);
    check = vstr(str);
    if (check == 0) {
        y = my_getnbr(0, str);
        if (p >= y && y != 0)
            return (y);
        else
            my_putstr("Error: this line is out of range\n");
    }
    else
        my_putstr("Error: invalid input (positive number expected)\n");
    return ((y + 1) * 100);
}

int nex(int a, int p, int i, char *buffer)
{
    i = 1;
    while (i != 0) {
        my_putstr(buffer);
        my_putstr("\nYour turn:\n");
        buffer = play(a, p, buffer);
        if (buffer == NULL)
            return (84);
        i = compte(buffer);
        if (compte(buffer) == 0) {
            my_putstr("You lost, too bad...\n");
            return (2);
        }
        buffer = bot(buffer, a, p);
        i = compte(buffer);
    }
    my_putstr(buffer);
    my_putstr("I lost... snif... but I'll get you next time!!\n");
    return (1);
}

int chec(char *str, char *stack)
{
    for (int o = 0; str[o] != '\0'; o++)
        if (str[o] < '0' || str[o] > '9')
            return (84);
    for (int o = 0; stack[o] != '\0'; o++)
        if (stack[o] < '0' || stack[o] > '9')
            return (84);
    return (0);
}

int main(int ac, char **av)
{
    int a;
    int p;
    char *buffer;
    int i = 0;

    srand(time(NULL));
    if (ac != 3)
        return (84);
    a = my_getnbr(0, av[1]);
    p = my_getnbr(0, av[2]);
    buffer = malloc(sizeof(char) * ((a+a+1) * 2) * a);
    if (a < 1 || a > 99 || chec(av[1], av[2]) != 0)
        return (84);
    buffer = map(buffer, i, a, p);
    a = nex(a, p, i, buffer);
    if (a == 84)
        return (0);
    if (a == 1)
        return (1);
    else
        return (2);
}
