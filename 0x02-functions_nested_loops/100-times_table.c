#include "main.h"

/**
  * print_times_table - Prints the n times table
  * @n: The number of times the table will be printed
  *
  * Return: Nothing
  */
void print_times_table(int n)
{
	int x, y, z, a, b, c;

	if (n >= 0 && n <= 14)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				a = z / 100;
				b = (z / 10) % 10;
				c = z % 10;
				
				if (z > 99)
				{
					a = z / 100;
					b = (z / 10) % 10;
					c = z % 10;
					
					_putchar(44);
					_putchar(32);
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(c + '0');
				}
				else if (z > 9)
				{
					a = z / 10;
					c = z % 10;
					
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(a + '0');
					_putchar(c + '0');
				}
				else
				{
					if (y != 0)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					
					_putchar(z + '0');
				}
			}
			
			_putchar('\n');
		}
	}
}i
