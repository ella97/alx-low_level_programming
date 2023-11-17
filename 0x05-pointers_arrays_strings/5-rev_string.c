#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 */
void rev_string(char *s)
{
    int length = 0;
    char temp;

    // Calculate the length of the string
    while (s[length] != '\0')
    {
        length++;
    }

    // Swap characters from the start and end of the string until the middle
    for (int i = 0; i < length / 2; i++)
    {
        temp = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = temp;
    }
}
