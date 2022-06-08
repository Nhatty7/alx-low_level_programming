#include "main.h"

/**
  * print_times_table - Prints a multiplication table
  *
  * Return: Number matrix
  */

int main(void)
{
	print_times_table(15);
	return (0);
}

void print_times_table(int n)
{
	int a, b, pro, prod;
	
	if (n >= 0 && n <= 14)
	{
		for (a = 0; a <= n; a++)
		{
			for(b = 0; b <= n; b++)
			{
				pro = a * b;
				prod = a * (b + 1);
				
				if (pro <= 9)
				{
					_putchar(pro + '0');
				}
				else if (pro <= 99)
				{
					int pro1 = pro / 10;
					int pro2 = pro % 10;
					_putchar(pro1 + '0');
					_putchar(pro2 + '0');
				}
				else
				{
					int pro1 = pro / 100;
					int pro2 = (pro / 10) % 10;
					int pro3 = pro % 10;
					_putchar(pro1 + '0');
					_putchar(pro2 + '0');
					_putchar(pro3 + '0');
				}
				
				if (b < n)
				{
					_putchar(',');
					prod = a * (b + 1);
					if (prod <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (prod <= 99)
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
}

