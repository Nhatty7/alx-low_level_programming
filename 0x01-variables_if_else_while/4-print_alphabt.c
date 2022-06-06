# include <stdlib.h>
# include <time.h>
# include <stdio.h>

/**
 * main -Prints alphabet of a to z except q and e
 *
 * Return: Always (Success)
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
	}
	putchar('\n');

	return (0);
}
