#include "main.h"
#include <stdio.h>

/**
 * infinite_add - ...
 * @n1: ...
 * @n2: ...
 * @r: ...
 * @size_r: ...
 *
 * Return: int
 */
int infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
 * add_strings - ...
 * @n1: ...
 * @n2: ...
 * @r: ...
 * @size_r: ...
 *
 * Return: pointer to string
 */
char *add_strings(char *n1, char *n2, char *r, int size_r)
{
	int num, i = 0;

	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += i;
		*(r + size_r) = (num % 10) + '0';
		i = num / 10;
	}

	for (; *n1 && n1--; size_r++)
	{
		num = (*n1 - '0') + i;
		*(r + size_r) = (num % 10) + '0';
		i = num / 10;
	}

	for (; *n2 && n2--; size_r--)
	{
		num = (*n2 - '0') + i;
		*(r + size_r) = (num % 10) + '0';
		i = num / 10;
	}
}
