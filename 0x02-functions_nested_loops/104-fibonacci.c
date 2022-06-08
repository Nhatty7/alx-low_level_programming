#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: nothing
 */
int main(void)
{
	int i = 0;
	int a = 1;
	int b = 2;

	while (i < 98)
	{
		if (i == 0)
		{
			printf("%d", a);
		}
		else if (i == 1)
		{
			printf(", %d", b);
		}
		else
		{
			int f = a + b;

			printf(", %d", f);
			a = b;
			b = f;
		}
		++i;
	}
	printf("\n");
	return (0);
}
