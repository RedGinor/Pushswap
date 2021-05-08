/*
** EPITECH PROJECT, 2020
** error_handler
** File description:
** handles errors
*/

int is_num(char *str)
{
    int neg = 0;
    int len = 0;

    for (; str[len] != '\0'; len++);
    if (len < 1)
        return (84);
    if (str[0] == '-' && len > 1)
        neg += 1;
    for (int i = neg; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return (84);
    return (0);
}

int error_handler(int ac, char **av)
{
    if (ac == 0)
        return (84);
    for (int i = 1; i <= ac; i++)
        if (is_num(av[i]) == 84)
            return (84);
    return (0);
}
