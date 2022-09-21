#include "main.h"

/**
 * _atoi - convert a string to integer
 * @s: string to be conversted
 * Return: int
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
