#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0, num = 0, c = 0, temp = 0;
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	num = atoi(argv[1]);
	
	if (num <= 0)
	{
		printf("0\n");
		return (0);
	}
	
	while (coins[i] != '\0')
	{
		if (num >= coins[i])
		{
			temp = (num / coins[i]);
			c += temp;
			num = num - coins[i] * temp;
		}
		
		i++;
	}
	
	printf("%d\n", c);
	return (0);
}
