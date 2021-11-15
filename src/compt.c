/*
** EPITECH PROJECT, 2020
** compte
** File description:
** compte
*/

int ne(char *buffer, int i)
{
    for (; buffer[i] == '|'; i++);
    return (i);
}

int li(char *buffer)
{
    int o = 0;

    for (int i = 0; buffer[i] != '|'; i++)
        if (buffer[i] == '\n')
            o++;
    return (o);
}

int mast(char *buffer)
{
    int i = 0;

    for (int o = 0; buffer[o] != '\0'; o++)
        if (buffer[o] == '|')
            i++;
    return (i);
}

int lin(char *buffer)
{
    int o = 0;

    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == '|') {
            o++;
            i = ne(buffer, i);
        }
    return (o);
}

int compte(char *buffer)
{
    int o = 0;

    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == '|')
            o++;
    return (o);
}
