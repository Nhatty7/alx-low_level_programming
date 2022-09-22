#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of array
 * @a: array of integers
 * @n: numbers of elements to swap
 * Return: empty
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;
	
	for (i = 0; i < (n + 1) / 2; i++)
	{
		temp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = temp;
	}
}
