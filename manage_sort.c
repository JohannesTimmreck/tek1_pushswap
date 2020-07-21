/*
** EPITECH PROJECT, 2018
** push swap
** File description:
** sort algorithm bubble sort
*/

#include "pushswap.h"

int list_is_sorted(num_t *l_a, int counter)
{
    while (l_a->next != NULL) {
        if (l_a->number > l_a->next->number)
            return (0);
        l_a = l_a->next;
        counter--;
    }
    if (counter > 0) {
        return (0);
    } else {
        return (1);
    }
}

int list_len(num_t *l_a)
{
    int counter = 0;

    while (l_a->next != NULL) {
        l_a = l_a->next;
        counter++;
    }
    return (counter);
}

num_t *first_smaller_num(num_t *l_a, int len)
{
    if (l_a->number > l_a->next->number) {
        l_a = swap_first_2_elem(l_a);
        write(1, "sa", 2);
        if (list_is_sorted(l_a, len) == 0) {
            write(1, " ", 1);
        }
    }
    return (l_a);
}

num_t *finish_la(num_t *l_a, num_t *l_b)
{
    num_t *new = l_b;

    new->next = l_a;
    write(1, "pa\n", 3);
    return (new);
}

num_t *my_sort(num_t *list)
{
    int len = list_len(list);
    num_t *l_a = list;
    num_t *l_b = malloc(sizeof(num_t));

    l_a = first_smaller_num(l_a, len);
    if (list_is_sorted(l_a, len) == 1) {
        write(1, "\n", 1);
        return (l_a);
    }
    l_b = first_sort_b(&l_a);
    while (list_is_sorted(l_a, (len - 1)) != 1) {
        while (l_a->next != NULL) {
            l_b = sort_into_list_b(&l_a, l_b);
        }
        while (l_b->next != NULL) {
            l_a = sort_into_list_a(l_a, &l_b);
        }
    }
    l_a = finish_la(l_a, l_b);
    return (l_a);
}
