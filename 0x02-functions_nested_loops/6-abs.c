#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @n: The number to be computed.
  *
  * Return: Absolute value of number
  */
int _abs(int n)
{
	if (n < 0)
	{
		int val;

		val = n * -1;

		return (val);
	}

	return (n);
}
