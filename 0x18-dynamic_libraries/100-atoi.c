#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int sum = 0;
	int flag = 0;
	
	while (s[i])
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}

		while (s[i] >= 48 && s[i] <= 57)
		{
			flag = 1;
			sum = (sum * 10) + (s[i] - '0');
			
			i++;
		}
		
		if (flag == 1)
		{
			break;
		}
		
		i++;
	}
	
	sum = sum * sign;
	
	return (sum);
}
