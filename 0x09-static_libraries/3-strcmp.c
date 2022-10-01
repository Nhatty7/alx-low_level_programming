#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int count = 0;
	int diff = 0;
	
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		count++;
	}
	
	for (i = 0; i < count; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			diff = s1[i] - s2[i];
			break;
		}
	}
	
	return (diff);
}
