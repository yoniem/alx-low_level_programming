#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: pointer to the head of the list
 * @size: number of nodes in the list
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    if (list == NULL || size == 0)
        return NULL;

    size_t jump_step = sqrt(size);
    listint_t *prev = NULL;
    listint_t *current = list;

    while (current != NULL && current->n < value)
    {
        prev = current;
        for (size_t i = 0; i < jump_step && current->next != NULL; i++)
            current = current->next;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    while (prev != NULL && prev->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return prev;
        prev = prev->next;
    }

    return NULL; // Not found
}
