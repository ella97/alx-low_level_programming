#include "main.h"

/**
 * print_diagonal - prints a diagonal line of the character '\' n times
 * @n: number of times to print the character '\'
 */
void print_diagonal(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < i; j++)
            {
                _putchar(' ');
            }
            _putchar('\\');
            _putchar('\n');
        }
    }
}
