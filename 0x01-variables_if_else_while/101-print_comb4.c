# include <stdlib.h>
# include <time.h>
# include <stdio.h>

/**
 * main -Prints distinctive two digit numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = i + 1; j <= '8'; j++)
		{
			for(k = i + 2; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);

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
