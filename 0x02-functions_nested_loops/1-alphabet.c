#include "main.h"

/**
  * main - Print alphabet
  *
  * Return: Always 0
  */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet()
{
	char az;
	
	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
	}
	_putchar('\n');
}
