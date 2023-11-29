#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to search in
 * @size: the number of elements in the array
 * @cmp: a pointer to the comparison function
 *
 * Return: index of the first matching element, or -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array != NULL && cmp != NULL)
    {
        for (int i = 0; i < size; i++)
        {
            if (cmp(array[i]))
                return (i);
        }
    }
    return (-1);
}
