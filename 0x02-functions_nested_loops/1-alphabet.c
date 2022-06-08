#include "main.h"

/**
 * main - print alphabet
 *
 * Return: Always 0
 */
void print_alphabet()
{
	char az;
	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	putchar('\n');
}
