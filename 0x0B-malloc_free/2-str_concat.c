#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - Concatenates two strings of any size
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: the two strings concatenated
  */
char *str_concat(char *s1, char *s2)
{
	int len, i = 0, j = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		len++;
		i++;
	}	
	while (s2[j])
	{
		len++;
		j++;
	}

	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		s[i] = s2[j];
		i++;
	}

	s[i] = '\0';
	return (s);
}
