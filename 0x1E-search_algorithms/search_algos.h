#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>

/* Task 0: Linear search */
int linear_search(int *array, size_t size, int value);

/* Task 1: Binary search */
int binary_search(int *array, size_t size, int value);

/* Task 7: Jump search */
int jump_search(int *array, size_t size, int value);

/* Task 9: Interpolation search */
int interpolation_search(int *array, size_t size, int value);

/* Task 10: Exponential search */
int exponential_search(int *array, size_t size, int value);

/* Task 11: Advanced binary search */
int advanced_binary(int *array, size_t size, int value);

/* Task 12: Jump search in a singly linked list */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

listint_t *jump_list(listint_t *list, size_t size, int value);

/* Task 13: Linear search in a skip list */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS_H */
