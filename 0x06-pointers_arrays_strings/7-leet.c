#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string
 * @c: string to be encoded
 *
 * Return: string
 */
char *leet(char *c)
{
	unsigned int i, j;
	char decode[] = {'A', 'E', 'O', 'T', 'L'};
	char encode[] = {'4', '3', '0', '7', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < (sizeof(decode) / sizeof(char)); j++)
		{
			if ((c[i] == decode[j]) || (c[i] == (decode[j] + 32)))
			{
				c[i] = encode[j];
			}
		}
	}

	return (c);
}
