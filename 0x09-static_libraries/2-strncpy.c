#include "main.h"
#include <stdio.h>

/**
 * _*strncpy - copy n number of characters from src to dest string
 * @dest: the first string
 * @src: the second string
 * @n: number of characters
 *
 * Return: pointer to a dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int countS = 0;
	int countD = 0;
	
	for (i = 0; src[i] != '\0'; i++)
	{
		countS++;
	}
	
	for (i = 0; dest[i] != '\0'; i++)
	{
		countD++;
	}
	
	if (n <= countS)
	{
		for (i = 0; i < n && i < countD; i++)
		{
			dest[i] = src[i];
		}
	}
	else
	{
		for (i = 0; src[i] != '\0' && i < countD; i++)
		{
			dest[i] = src[i];
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	
	return (dest);
}
