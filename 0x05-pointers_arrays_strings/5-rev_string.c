#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int c, j, i;
	char *a, temp;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (j = 1; j < c; j++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		temp = s[i];
		s[i] = *a;
		*a = temp;
		a--;
	}
}
