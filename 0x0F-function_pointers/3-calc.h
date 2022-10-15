#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - calculate sum of two integers
  * @a: the first integer
  * @b: the second integer
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - calculate difference of two integers
  * @a: the first integer
  * @b: the second integer
  *
  * Return: difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - calculate multiplication of two integers
  * @a: the first integer
  * @b: the second integer
  *
  * Return: multiplication of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - calculate division of two integers
  * @a: the first integer
  * @b: the second integer
  *
  * Return: division of a and b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - calculate mod of two integers
  * @a: the first integer
  * @b: the second integer
  *
  * Return: mod of a and b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
