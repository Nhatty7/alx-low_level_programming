#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime factor
 * Return: Always 0 (success)
 */

int main(void)
{
	long x;
	long max;
	long n = 612852475143;
	double sqr = sqrt(n);

	for (x = 1; x <= sqr; x++)
	{
		if (n % x == 0)
		{
			max = n / x;
		}
	}

	printf("%ld\n", max);

	return (0);
}
