#include "main.h"

/**
 * _strcat - concatenetes two strings
 * @dest: destination string
 * @src: source string
 * Return: char pointer
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
