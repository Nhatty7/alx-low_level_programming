#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - Prints a name
  * @name: The name to be printed
  * @f: Pointer to function
  *
  * Return: nothing.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
