#include "main.h"
#include <stdio.h>

/**
  * print_chessboard - Print the chessboard
  * @a: array of pieces
  *
  * Return: Nothing.
  */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < (sizeof(a) / sizeof(char)); i++)
	{
		for (j = 0; j < (sizeof(a[i]) / sizeof(char)); j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
