#include "main.h"

/**
  * main - Print 9 times table
  *
  * Return: Always 0
  */

int main(void)
{
	times_table();
	return (0);
}

void times_table(void)
{
	int i, j, r;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			if (r > 9)
			{
				int r1 = r / 10;
				int r2 = r % 10;
				_putchar(r1 + '0');
				_putchar(r2 + '0');
			}
			else
			{
				_putchar(r + '0');
			}
			
			if (j < 9)
			{
				_putchar(',');
				
				int res = i * (j + 1);
				if (res <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
