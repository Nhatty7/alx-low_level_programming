#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination value
 * @src: source value
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i + 1] = src[i + 1];

	return (dest);
}
