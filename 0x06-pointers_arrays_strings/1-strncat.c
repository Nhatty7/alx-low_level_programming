#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination value
 * @src: source value
 * Return: char pointer
 */

char *_strncat(cahr *dest, char *src, int n)
{
	int len = 0;
	int j = 0;

	while (dest[len])
	{
		len++;
	}

	while (j < n && src[j])
	{
		dest[len] = src[j];
		len++;
		j++;
	}

	dest[len + n + 1]  = '\0';

	return (dest);
}
