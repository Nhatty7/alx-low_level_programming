#include "main.h"
#include <stdio.h>

/**
  * _strstr - locate a substring
  * @haystack: the string to search
  * @needle: the string to find
  *
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0, i = 0, counter;

	while (needle[i])
	{
		i++;
	}

	while (haystack[a])
	{
		counter = 0;

		while (needle[b])
		{
			if (needle[b] == haystack[a + counter])
			{
				counter++;
			}
			else
			{
				break;
			}

			b++;
		}

		if (counter == i)
		{
			return (haystack + a);
		}
		a++;
	}

	return ('\0');
}
