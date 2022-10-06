#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * array_range - create an array of integers
  * @min: minimum
  * @max: maximum
  *
  * Return: integer
  */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + 1);

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
