#include "main.h"
#include <stdio.h>

/**
 * _*strncat - Concatenate n number of characters from src to dest string
 * @dest: the first string
 * @src: the second string
 * @n: number of characters
 *
 * Return: pointer to a dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int countD = 0;
	int countS = 0;
	
	for (i = 0; dest[i] != '\0'; i++)
	{
		countD++;
	}
	
	for (i = 0; src[i] != '\0'; i++) // w o r
	{
		countS++; // 1 2 3
	}
	
	if (n <= countS)
	{
		for (i = 0; i < n; i++)
		{
			dest[countD] = src[i];
			countD++;
		}
	}
	else
	{
		for (i = 0; i < countS; i++)
		{
			dest[countD] = src[i];
			countD++;
		}
		dest[countD] = '\0';
	}
	
	return (dest);
}
