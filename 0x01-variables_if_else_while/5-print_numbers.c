# include <stdlib.h>
# include <time.h>
# include <stdio.h>

/**
 * main -Print numbers 0 to 9
 *
 * Return: Always (Success)
 */
int main(void)
{
	char az;

	for (az = '0'; az <= '9'; az++)
	{
		putchar(az);
	}
	putchar('\n');

	return (0);
}
