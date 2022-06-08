#include "main.h"

/**
  * main - Computes absolute value
  *
  * Return: Always 0
  */

int main(void)
{
	int r;
	
	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

int _abs(int n)
{
	if (n < 0)
	{
		int abs;
		abs = n * -1;
		return (abs);
	}
	else
	{
		return (n);
	}
}
