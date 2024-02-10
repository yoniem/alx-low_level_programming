#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of value if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    size_t jump_step = sqrt(size);
    size_t start = 0;
    size_t end = jump_step;

    printf("Value checked array[%lu] = [%d]\n", start, array[start]);
    while (end < size && array[end] < value)
    {
        start = end;
        end += jump_step;
        printf("Value checked array[%lu] = [%d]\n", start, array[start]);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", start, end);
    for (size_t i = start; i <= end && i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1; // Not found
}
