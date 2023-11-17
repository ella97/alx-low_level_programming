#include <stdio.h>
#include "main.h"

void print_triangle(int size)
{
    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    int i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            _putchar(' ');
        }

        for (j = 0; j < i + 1; j++)
        {
            _putchar('#');
        }

        _putchar('\n');
    }
}
