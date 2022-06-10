#include "main.h"

/**
 * _isupper - check if the letter is upper
 * @x: the number to be checked
 * Return: 1 or 0
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
