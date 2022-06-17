#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination value
 * @src: source value
 * Return: char pointer
 */

char *_strncat(cahr *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		;
	}

	for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
	{
		dest[x] = src[y];
	}

	return (dest);
}
