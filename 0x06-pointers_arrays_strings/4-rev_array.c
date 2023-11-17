#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *c, int n)
{
	int a, b, tmp;

	b = n - 1;

	for (a = 0; a < n / 2; a++)
	{
		tmp = c[a];
		c[a] = c[b];
		c[b--] = tmp;
	}
}
