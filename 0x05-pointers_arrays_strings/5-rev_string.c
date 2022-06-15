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

	while (s[c] != '\0')
	{
		c++;
	}

	for (i = 1; i < c; i++)
	{
		a++;
	}

	for (j = 0; j < ((c + 1) / 2); j++)
	{
		temp = s[j];
		s[j] = *a;
		*a = temp;
		a--;
	}
}
