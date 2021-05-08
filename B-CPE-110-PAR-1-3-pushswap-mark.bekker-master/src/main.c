/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "../include/my.h"

int my_getnbr(char *str)
{
    int number = 0;
    int neg = 1;
    int i = 0;

    if (str[0] == '-') {
        i = 1;
        neg = -1;
    }
    for (; str[i] != '\0'; i++) {
        number *= 10;
        number += str[i] - '0';
    }
    return (number * neg);
}

int my_compare(int *l_a, int i, int j)
{
    if (l_a[i] < l_a[j] || (l_a[i] == l_a[j] && i < j))
        return (0);
    return (1);
}

void get_score(int *l_a, int *l_s, int ac)
{
    int count = 0;

    for (int i = 0; i < ac; i++, count = 0) {
        for (int j = 0; j < ac; j++)
            if (i != j)
                count += my_compare(l_a, i, j);
        l_s[i] = count;
    }
}

int main(int ac, char **av)
{
    int l_a[ac - 1];
    int l_b[ac - 1];
    int l_s[ac - 1];

    ac -= 1;
    if (error_handler(ac, av) == 84)
        return (84);
    for (int i = 0; i < ac; l_b[i] = 0, i++)
        l_a[i] = my_getnbr(av[i + 1]);
    get_score(l_a, l_s, ac);
    sort_list(l_a, l_b, l_s, ac);
    return (0);
}
