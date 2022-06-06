# include <stdlib.h>
# include <time.h>
# include <stdio.h>

/**
 * main -Prints alphabet of a to z
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
	for (az = 'a'; az <= 'f'; az++)
	{
		putchar(az);
	}
	putchar('\n');

	return (0);
}
