/*
** EPITECH PROJECT, 2020
** include
** File description:
** header
*/

#include <unistd.h>

int error_handler(int ac, char **av);

int check_order(int *l_a, int ac, int m);

void sort_list(int *l_a, int *l_b, int *l_s, int ac);

void move_ra(int *l_a, int *l_s, int ac, int *m);

void move_pb(int *l_a, int *l_b, int ac, int *m);

void move_pa(int *l_a, int *l_b, int ac, int m);

void move_sa(int *l_a, int *l_s, int ac, int *m);
