#include "search_algos.h"
#include <stdio.h>

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of value if found, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    size_t bound = 1;

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    size_t low = bound / 2;
    size_t high = (bound < size - 1) ? bound : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", low, high);

    return binary_search(array, low, high, value);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @low: the starting index of the search range
 * @high: the ending index of the search range
 * @value: value to search for
 * Return: index of value if found, -1 otherwise
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
    while (low <= high)
    {
        size_t mid = low + (high - low) / 2;

        printf("Searching in array: ");
        for (size_t i = low; i <= high; i++)
        {
            printf("%d", array[i]);
            if (i < high)
                printf(", ");
        }
        printf("\n");

        printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // Not found
}
