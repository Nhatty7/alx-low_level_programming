#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum of arguments
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	unsigned int j;
	int i;
	int mul = 1;
	char *num;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			num = argv[i];

			for (j = 0; j < strlen(num); j++)
			{
				if (num[j] < 48 || num[j] > 57)
				{
					printf("Error\n");
					exit(98);
				}
			}

			mul *= atoi(num);
			num++;
		}

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}
