#include "main.h"

/**
 * _isdigit - check if the character is digit
 * @x: the number to be checked
 * Return: 1 or 0
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
