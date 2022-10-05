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
  * num_words - count words
  * @str: the string to be counted
  *
  * Return: number of words
  */
int num_words(char *str)
{
	int i = 0, w = 0;

	while (i <= length(str))
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
		{
			i++;
		}
		else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
		{
			w += i;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (w);
}

/**
  * strtow - split words
  * @str: the string to be splitted
  *
  * Return: splitted words
  */
char **strtow(char *str)
{
	char **sp;
	int i;
	int g = 0, temp = 0, size = 0;
	int w = num_words(str);

	if (w == 0)
	{
		return (NULL);
	}
	sp = (char **) malloc(sizeof(char *) * (w + 1));
	if (sp != NULL)
	{
		for (i = 0; i <= length(str) && w; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
			{
				size++;
			}
			else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
			{
				sp[g] = (char *)malloc((sizeof(char) * size) + 1);
				if (sp[g] != NULL)
				{
					while (temp < size)
					{
						sp[g][temp] = str[(i - size) + temp];
						temp++;
					}
					sp[g][temp] = '\0';
					size = temp = 0;
					g++;
				}
				else
				{
					while (g-- >= 0)
					{
						free(sp[g]);
					}
					free(sp);
					return (NULL);
				}
			}
		}
		sp[w] = NULL;
		return (sp);
	}
	else
	{
		return (NULL);
	}
}
