#include "main.h"

/**
  * main - Print alphabet
  *
  * Return: Always 0
  */

int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10()
{
	char az;
	int i;
	
	for (i = 1; i <= 10; i++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
		_putchar('\n');
	}
}
