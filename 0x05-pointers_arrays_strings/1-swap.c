#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: an integer to be swapped
 * @b: another integer to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
