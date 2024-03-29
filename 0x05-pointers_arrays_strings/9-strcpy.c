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
	while (dest[i])
	{
		dest[i++] = '\0';
		i++;
	}
	return (dest);
}
