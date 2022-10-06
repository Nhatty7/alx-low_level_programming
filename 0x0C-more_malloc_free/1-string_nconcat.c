#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: source string
  * @s2: destination string
  * @n: numbers of characters
  *
  * Return: poiter to a string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k, size;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	if (n >= j)
		size = i + j;
	else
		size = i + n;

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		str[k] = s1[k];

	size -= k;
	for (i = 0; i < size; i++)
	{
		str[k] = s2[i];
		k++;
	}
	str[k] = '\0';
	return (str);
}
