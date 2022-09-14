#include "main.h"

/**
 * main - print alphabet
 *
 * Return: Always 0
 */
void print_alphabet()
{
	int az;

	for (az = 97; az <= 122; az++)
	{
		_putchar(az);
	}
	
	_putchar('\n');
}
