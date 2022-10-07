#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalize all words of a string
 * @s: string of char to be changed
 *
 * Return: string
 */
char *cap_string(char *s)
{
	unsigned int i, j;
	int separator[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			if (i == 0)
				s[i] -= 32;

			for (j = 0; j < (sizeof(separator) / sizeof(int)); j++)
			{
				if (s[i - 1] == separator[j])
					s[i] -= 32;
			}
		}
	}

	return (s);
}
