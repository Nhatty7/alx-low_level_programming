#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * length - string length
  * @s: string
  *
  * Return: int
  */

int length(char *s)
{
	int l = 0;

	if (s != NULL)
	{
		while (s[l])
		{
			l++;
		}
	}

	return (l);
}

/**
  * argstostr - convert the params passed to the program to string
  * @ac: the argument count
  * @av: the argument vector
  *
  * Return: char
  */
char *argstostr(int ac, char **av)
{
	int c = 0, sum = 0, temp = 0;
	int g;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (ac--)
	{
		sum = sum + (length(av[ac]) + 1);
	}
	str = (char *) malloc(sum + 1);

	if (str != NULL)
	{
		while (c < 1)
		{
			for (g = 0; av[c][g] != '\0'; g++)
			{
				str[g + temp] = av[c][g];
			}
			str[temp + g] = '\n';
			temp += (g + 1);
			c++;
		}
		str[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (str);
}
