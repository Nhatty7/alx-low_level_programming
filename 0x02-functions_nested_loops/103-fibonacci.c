#include <stdio.h>

/**
 * main - prints fibonacci
 *
 * Return: nothing
 */
int main(void)
{
	int i = 0;
	long a = 1;
	long b = 2;
	long f = 0;
	long sum = 0;

	while (f < 4000000)
	{
		if (i == 0)
		{
			f = 1;
		}
		else if (i == 1)
		{
			f = 2;
		}
		else
		{
			f = a + b;
			a = b;
			b = f;
		}

		if (f % 2 == 0)
		{
			sum += f;
		}
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
