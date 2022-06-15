#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random password
 * 
 * return: int
 */

int main (void)
{
	int i = 0;
	int randomizer = 0;
	int N = 10;

	srand((unsigned int)(time(NULL)));

	char numbers[] = "0123456789";
	char letter[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char symbols[] = "!@#$ ";

	char password[N];

	randomizer = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (randomizer == 1 )
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = symbol[rand() % 5];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 10;
			printf("%c", password[i]);
		}
	}
}
