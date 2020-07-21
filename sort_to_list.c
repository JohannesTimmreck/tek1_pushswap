/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** sort list
*/

#include "pushswap.h"

num_t *first_sort_b(num_t **l_a)
{
    num_t *l_b = *l_a;

    *l_a = remove_first_elem(*l_a);
    l_b->next = NULL;
    write(1, "pb ", 3);
    return (l_b);
}

num_t *smaller_num(num_t *l_a)
{
    if (l_a->number > l_a->next->number) {
        l_a = swap_first_2_elem(l_a);
        write(1, "sa ", 3);
    }
    return (l_a);
}

num_t *higher_num(num_t *l_b)
{
    if (l_b->number < l_b->next->number) {
        l_b = swap_first_2_elem(l_b);
        write(1, "sb ", 3);
    }
    return (l_b);
}

num_t *sort_into_list_b(num_t **l_a, num_t *l_b)
{
    *l_a = smaller_num(*l_a);
    l_b = add_to_first_elem_sec_list(l_b, l_a);
    write(1, "pb ", 3);
    return (l_b);
}

num_t *sort_into_list_a(num_t *l_a, num_t **l_b)
{
    *l_b = higher_num(*l_b);
    l_a = add_to_first_elem_sec_list(l_a, l_b);
    write(1, "pa ", 3);
    return (l_a);
}
