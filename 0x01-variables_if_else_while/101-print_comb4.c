# include <stdlib.h>
# include <time.h>
# include <stdio.h>

/**
 * main -Prints distinctive three digit numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = i + 1; j <= '8'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i < '7' && j <= '8' && k <= '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
