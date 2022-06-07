# include <stdlib.h>
# include <time.h>
# include <stdio.h>

/**
 * main -Prints comma separated numbers 0 to 9
 *
 * Return: Always (Success)
 */
int main(void)
{
	int az;

	for (az = '0'; az <= '9'; az++)
	{
		putchar(az);

		if (az != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
