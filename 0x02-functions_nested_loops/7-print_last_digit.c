#include "main.h"

/**
  * main - Check for a letter
  *
  * Return: Always 0
  */

int main(void)
{
	int r;
	
	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

int print_last_digit(int n)
{
	int last;
	last = n % 10;
	
	if (last < 0)
	{
		last = last * -1;
	}
	
	return (last);
}
