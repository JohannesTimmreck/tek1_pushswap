/*
** EPITECH PROJECT, 2018
** PUSHSWAP
** File description:
** header
*/

#ifndef PUSHSWAP
#define PUSHSWAP

#include <stdio.h>
#include <stdlib.h>
#include "lib/my_printf/headerfile_printf.h"

typedef struct num_s num_t;
struct num_s
{
    int number;
    num_t *next;
};

num_t *first_sort_b(num_t **l_a);
num_t *smaller_num(num_t *l_a);
num_t *higher_num(num_t *l_b);
num_t *sort_into_list_b(num_t **l_a, num_t *l_b);
num_t *sort_into_list_a(num_t *l_a, num_t **l_b);

num_t *add_to_first_elem(num_t *list, num_t *new);
num_t *add_to_last_elem(num_t *list, num_t *new);
num_t *remove_last_elem(num_t *list);
num_t *remove_first_elem(num_t *list);
num_t *swap_first_2_elem(num_t *list);

num_t *add_to_first_elem_sec_list(num_t *list1, num_t **list2);
num_t *create_node(int number);
num_t *my_sort(num_t *l_a);

int my_getnbr(char const *str);

#endif
