#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - perform basic operations
  * @argc: number of arguments
  * @argv: array of arguments
  *
  * Return: always 0.
  */
int main(int argc, char *argv[])
{
	char c;
	int a, b, res;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = get_op_func(argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}
	
	c = *argv[2];
	
	if ((c == '/' || c == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	
	res = op(a, b);
	
	printf("%d\n", res);
	
	return (0);
}
