#include "main.h"
#include <stdio.h>

/**
  * main - Print to 98
  *
  * Return: Always 0
  */

int main(void)
{
	int n;
	
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}

void print_to_98 (int n)
{
	int i;
	
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	
	else if (n == 98)
	{
		printf("%d\n", 98);
	}
	
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
}
