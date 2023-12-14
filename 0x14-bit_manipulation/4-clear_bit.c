#include "main.h"
/**
 * clear_bit - set the value of a bit to 0 at a given idx
 * @z: pointer to decimal number to change
 * @idx: idx position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *z, unsigned int idx)
{
unsigned long int i;
unsigned int catch;

if (idx > 64)
return (-1);
catch = idx;
for (i = 1; catch > 0; i *= 2, catch--)
;

if ((*z >> idx) & 1)
*z -= i;

return (1);
}
