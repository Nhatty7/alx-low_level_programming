#include "main.h"
#include <stdio.h>

/**
  * _strchr - locate character in string
  * @s: source string
  * @c: character to find
  *
  * Return: the string from character found
  */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a])
	{
		if (c == s[a])
		{
			s = s + a;

			return (s);
		}
		a++;
	}

	return ('\0');
}
