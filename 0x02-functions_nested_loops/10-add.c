#include "main.h"

/**
  * main - Add two integers
  *
  * Return: Always 0
  */

int main(void)
{
	int n;
	
	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}

int add (int a, int b)
{
	int sum;
	
	sum = a + b;
	return (sum);
}
