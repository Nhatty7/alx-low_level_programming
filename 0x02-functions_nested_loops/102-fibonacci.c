#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: nothing
 */
int main(void)
{
	int i = 0;
	long a = 1;
	long b = 2;

	while (i < 50)
	{
		if (i == 0)
		{
			printf("%ld", a);
		}
		else if (i == 1)
		{
			printf(", %ld", b);
		}
		else
		{
			int f = a + b;
			printf(", %ld", f);
			a = b;
			b = f;
		}
		++i;
	}
	printf("\n");
	return (0);
}
