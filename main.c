/*
** EPITECH PROJECT, 2018
** test
** File description:
** test
*/

#include "pushswap.h"

num_t *create_node(int number)
{
    num_t *struc = malloc(sizeof(num_t));

    if (struc == NULL)
        exit(84);
    struc->number = number;
    struc->next = NULL;
    return (struc);
}

num_t *first_elem_to_last(num_t *list)
{
    num_t *tmp = list;
    num_t *save = list->next;

    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = list;
    list->next = NULL;
    return (save);
}

num_t *last_elem_to_first(num_t *list)
{
    num_t *tmp = list;
    num_t *tmp2 = list;

    while (tmp->next->next != NULL)
        tmp = tmp->next;
    tmp2 = tmp->next;
    tmp->next = NULL;
    tmp2->next = list;
    return (tmp2);
}

num_t *add_to_first_elem_sec_list(num_t *list1, num_t **list2)
{
    num_t *tmp = *list2;

    *list2 = remove_first_elem(*list2);
    tmp->next = list1;
    return (tmp);
}

int main(int ac, char **av)
{
    num_t *num1;
    num_t *num2;

    num1 = create_node(my_getnbr(av[1]));
    for (int i = 2; i < ac; i++) {
        num2 = create_node(my_getnbr(av[i]));
        num1 = add_to_last_elem(num1, num2);
    }
    if (num1->next == NULL) {
        write(1, "\n", 1);
        return (0);
    }
    num1 = my_sort(num1);
    return (0);
}
