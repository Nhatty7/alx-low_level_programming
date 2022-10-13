#include <stdio.h>
#include <stdlib.h>

/**
  * main - Print opcodes
  * @argc: number of args
  * @argv: arguments
  *
  * Return: nothing.
  */
int main(int argc, char *argv[])
{
	int a, i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(2);
	}
	
	a = atoi(argv[1]);
	
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	
	array = (char *)main;
	
	for (i = 0; i < a; i++)
	{
		if (i == (a - 1))
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx\n", array[i]);
	}
	return (0);
}
