#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int c, i;
	char *a, temp;

	a = s;

	while (s[c] != '\0')
	{
		c++;
		a++;
	}
	a--;

	for (i = 0; i < (c / 2); i++)
	{
		temp = s[i];
		s[i] = *a;
		*a = temp;
		a--;
	}
}
