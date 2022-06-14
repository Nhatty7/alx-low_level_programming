#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string to be counted
 * Return: integer
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
