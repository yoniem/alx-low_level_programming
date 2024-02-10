#include "search_algos.h"
#include <stdio.h>

/**
 * advanced_binary_recursive - searches for a value in a sorted array of integers
 * using the Advanced Binary search algorithm recursively
 * @array: pointer to the first element of the array
 * @left: the starting index of the search range
 * @right: the ending index of the search range
 * @value: value to search for
 * Return: index of value if found, -1 otherwise
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    if (left <= right)
    {
        size_t mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
        {
            if (mid == left || array[mid - 1] != value)
                return mid;
            else
                return advanced_binary_recursive(array, left, mid, value); // Search left subarray for first occurrence
        }
        else if (array[mid] > value)
            return advanced_binary_recursive(array, left, mid - 1, value);
        else
            return advanced_binary_recursive(array, mid + 1, right, value);
    }

    return -1; // Not found
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Advanced Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of value if found, -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return advanced_binary_recursive(array, 0, size - 1, value);
}
