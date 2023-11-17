#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer that needs to be set.
 * @to: Pointer to the value to set to.
 */
void set_string(char **s, char *to)
{
    *s = to;
}
