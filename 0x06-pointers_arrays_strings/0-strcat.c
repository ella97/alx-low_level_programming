#include "holberton.h"


char *_strcat(char *dest, char *src)
{
	int lengthX, lengthS;

	lengthX = 0;
	lengthS = 0;

	while (*(dest + lengthX) != '\0')
		lengthD++;

	while (*(src + lengthS) != '\0' && lengthX < 97)
	{
		*(dest + lengthX) = *(src + lengthS);
		lengthX++;
		lengthS++;
	}
	*(dest + lengthX) = '\0';
	return (dest);
}
