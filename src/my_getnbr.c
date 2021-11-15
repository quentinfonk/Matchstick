/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** my_getnbr.c
*/

int my_getnbr(int n, char *str)
{
    int nb = 0;
    int a = 1;
    int p = 0;

    if (str[n] == '-') {
        n++;
        p++;
    }
    while (str[n] < '0' || str[n] > '9')
        n++;
    while (str[n] <= '9' && str[n] >= '0') {
        nb = ((nb * 10) + (str[n] - 48));
        n++;
    }
    if (p == 1)
        nb = nb * (-1);
    return (nb);
}
