#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * get_endianness - check the endianness
  *
  * Return: 0 or 1
  */
int get_endianness(void)
{
	int n = 1;
	char *e = (char *)&n;
	
	if (*e == 1)
		return (1);
	
	return (0);
}
