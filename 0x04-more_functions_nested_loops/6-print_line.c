#include "main.h"

/**
 * print_line - prints a straight line of the character '_' n times
 * @n: number of times to print the character '_'
 */
void print_line(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int i;
        for (i = 0; i < n; i++)
        {
            _putchar('_');
        }
        _putchar('\n');
    }
}
