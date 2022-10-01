#include "main.h"
#include <stdio.h>

/**
 * _*strcat - Concatenate two strings
 * @dest: the first string
 * @src: the second string
 *
 * Return: pointer to a string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int count = 0;
	
	for (i = 0; dest[i] != '\0'; i++)
	{
		count++;
	}
	
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count] = src[i];
		count++;
	}
	dest[count] = '\0';
	
	return (dest);
}
