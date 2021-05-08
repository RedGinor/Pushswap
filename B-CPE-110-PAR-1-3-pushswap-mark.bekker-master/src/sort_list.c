/*
** EPITECH PROJECT, 2020
** sort_list
** File description:
** sorts list
*/

#include <unistd.h>
#include "../include/my.h"

int check_order(int *l_s, int ac, int m)
{
    for (int i = m; i < ac - 1; i++)
        if (l_s[i] + 1 != l_s[i + 1]) {
            return (0);
        }
    return (1);
}

void sort_list(int *l_a, int *l_b, int *l_s, int ac)
{
    int m[2] = {0, 0};

    while (check_order(l_s, ac, m[0]) == 0) {
        if (m[0] + 1 < ac)
            move_sa(l_a, l_s, ac, m);
        while (l_s[m[0]] != m[0])
            move_ra(l_a, l_s, ac, m);
        if (check_order(l_s, ac, m[0]) == 0) {
            move_pb(l_a, l_b, ac, m);
            m[0]++;
        }
    }
    move_pa(l_a, l_b, ac, m[0]);
    if (m[1] != 0)
        write(1, "\n", 1);
}
