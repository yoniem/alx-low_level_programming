#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of value if found, -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    size_t low = 0;
    size_t high = size - 1;
    size_t pos;

    while (low <= high && value >= array[low] && value <= array[high])
    {
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return pos;
        else if (array[pos] < value)
            low = pos + 1;
        else
            high = pos - 1;
    }

    printf("Value checked array[%lu] is out of range\n", pos);
    return -1; // Not found
}
