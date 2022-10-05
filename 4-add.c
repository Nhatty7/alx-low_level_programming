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
	int i;
	unsigned int k, sum = 0;
	char *num;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = argv[i];

			for (k = 0; k < strlen(num); k++)
			{
				if (num[k] < 48 || num[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(num);
			num++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
