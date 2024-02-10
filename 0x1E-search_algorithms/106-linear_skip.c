#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers using Linear search algorithm
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *prev = NULL;
    skiplist_t *curr = list;

    if (list == NULL)
        return NULL;

    while (curr != NULL && curr->n < value)
    {
        prev = curr;
        if (curr->express == NULL)
        {
            while (curr->next != NULL)
                curr = curr->next;
        }
        else
        {
            printf("Value checked at index [%lu] = [%d]\n", curr->express->index, curr->express->n);
            curr = curr->express;
        }
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, curr->index);

    while (prev != NULL && prev->index <= curr->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return prev;
        prev = prev->next;
    }

    return NULL;
}
