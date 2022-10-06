#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _calloc - Allocate memory
  * @nmemb: number of members
  * @size: size
  *
  * Return: nothing
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, len;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;
	s = malloc(len);

	if (s == NULL)
		return (NULL);

	while (i < len)
	{
		s[i] = 0;
		i++;
	}

	return (s);
}
