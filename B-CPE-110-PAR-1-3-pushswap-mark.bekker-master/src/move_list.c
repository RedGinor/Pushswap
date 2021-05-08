/*
** EPITECH PROJECT, 2020
** move_list
** File description:
** moves list
*/

#include "../include/my.h"

void move_ra(int *l_a, int *l_s, int ac, int *m)
{
    int tmp_a = l_a[m[0]];
    int tmp_s = l_s[m[0]];

    if (check_order(l_s, ac, m[0]) == 0) {
        for (int i = m[0]; i < ac - 1; i++) {
            l_a[i] = l_a[i + 1];
            l_s[i] = l_s[i + 1];
        }
        l_a[ac - 1] = tmp_a;
        l_s[ac - 1] = tmp_s;
        if (m[1] > 0)
            write(1, " ", 1);
        write(1, "ra", 2);
        m[1]++;
    }
}

void move_pb(int *l_a, int *l_b, int ac, int *m)
{
    l_b[ac - m[0] - 1] = l_a[m[0]];
    l_a[m[0]] = 0;
    if (m[1] > 0)
        write(1, " ", 1);
    write(1, "pb", 2);
    m[1]++;
}

void move_pa(int *l_a, int *l_b, int ac, int m)
{
    for (m -= 1; m >= 0; m--) {
        l_a[m] = l_b[ac - m - 1];
        l_b[ac - m - 1] = 0;
        write(1, " pa", 3);
    }
}

void move_sa(int *l_a, int *l_s, int ac, int *m)
{
    int tmp_a = l_a[m[0]];
    int tmp_s = l_s[m[0]];

    if (l_s[m[0]] == l_s[m[0] + 1] + 1) {
        l_a[m[0]] = l_a[m[0] + 1];
        l_s[m[0]] = l_s[m[0] + 1];
        l_a[m[0] + 1] = tmp_a;
        l_s[m[0] + 1] = tmp_s;
        if (m[1] > 0)
            write(1, " ", 1);
        write(1, "sa", 2);
        m[1]++;
    }
}
