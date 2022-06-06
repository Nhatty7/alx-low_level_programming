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

	for (az = 'z'; az >= 'a'; az--)
	{
		putchar(az);
	}
	putchar('\n');

	return (0);
}
