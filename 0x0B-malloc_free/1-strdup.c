#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to be duplicate
  *
  * Return: string
  */
char *_strdup(char *str)
{
	int i = 1, j;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
	{
		s[j] = str[j];
	}

	s[j] = '\0';
	return (s);
}
