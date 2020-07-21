/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** functions to modify list
*/

#include "pushswap.h"

num_t *add_to_first_elem(num_t *list, num_t *new)
{
    new->next = list;
    return (new);
}

num_t *add_to_last_elem(num_t *list, num_t *new)
{
    num_t *tmp = list;

    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new;
    return (list);
}

num_t *remove_last_elem(num_t *list)
{
    num_t *tmp = list;

    while (tmp->next->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = NULL;
    return (list);
}

num_t *remove_first_elem(num_t *list)
{
    list = list->next;
    return (list);
}

num_t *swap_first_2_elem(num_t *list)
{
    num_t *tmp = list->next;

    list->next = tmp->next;
    tmp->next = list;
    return (tmp);
}
