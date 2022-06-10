#include "main.h"

/**
 * more_numbers - print 0-9 10 times
 * return: nothing
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				int y1, y2;

				y1 = y / 10;
				y2 = y % 10;
				_putchar((y1 + '0');
				_putchar((y2 + '0');
			}
			else
			{
				_putchar(y + '0');
			}
		}

		_putchar('\n');
	}
}
