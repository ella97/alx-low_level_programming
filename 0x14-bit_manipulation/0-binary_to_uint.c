#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string representing the binary number.
 * Return: The converted number, or 0 if invalid binary string.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result, total;
int i;

if (b == NULL)
return (0);

for (i = 0; b[i]; i++)
{
    if (b[i] != '0' && b[i] != '1')
    return (0);
}

for (total = 1, result = 0, i--; i >= 0; i--, total *= 2)
{
    if (b[i] == '1')
    result += total;
}
return (result);

}

