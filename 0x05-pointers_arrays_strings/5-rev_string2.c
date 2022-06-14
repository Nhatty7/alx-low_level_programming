#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int c, i, j;
	char *a;
	char temp;

	a = s;

	while (s[c] != '\n')
	{
		c++;
	}

	for (i = 1; i < c; i++)
	{
		a++;
	}

	for (j = 0; j < (c / 2); j++)
	{
		temp = s[j];
		s[j] = *a;
		*a = temp;
		a--;
	}
}
