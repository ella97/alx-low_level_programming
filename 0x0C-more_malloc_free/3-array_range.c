#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max
 * @min: Minimum value of the array
 * @max: Maximum value of the array
 *
 * Return: A pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
    int *arr;
    int size, value;

    if (min > max)
        return (NULL);

    size = max - min + 1;

    arr = malloc(size * sizeof(int));
    if (arr == NULL)
        return (NULL);

    value = min;
    for (int i = 0; i < size; i++) {
        arr[i] = value;
        value++;
    }

    return (arr);
}
