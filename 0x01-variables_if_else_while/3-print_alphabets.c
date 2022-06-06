# include <stdlib.h>
# include <time.h>
# include <stdio.h>

/**
 * main -Prints alphabet of a to z and A to Z
 *
 * Return: Always (Success)
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	for (az = 'A'; az <= 'Z'; az++)
	{
		putchar(az);
	}
	putchar('\n');

	return (0);
}
