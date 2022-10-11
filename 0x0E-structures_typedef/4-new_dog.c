#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - ...
  * @name: ...
  * @age: ...
  * @owner: ...
  *
  * Return: ...
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *c_dog;
	int n = 0, o = 0;

	if (name != NULL && owner != NULL)
	{
		n = _strlen(name) + 1;
		o = _strlen(owner) + 1;
		c_dog = malloc(sizeof(dog_t));

		if (c_dog == NULL)
			return (NULL);

		c_dog->name = malloc(sizeof(char) * n);

		if (c_dog->name == NULL)
		{
			free(c_dog);
			return (NULL);
		}

		c_dog->owner = malloc(sizeof(char) * o);

		if (c_dog->owner == NULL)
		{
			free(c_dog->name);
			free(c_dog);
			return (NULL);
		}

		c_dog->name = _strcpy(c_dog->name, name);
		c_dog->owner = _strcpy(c_dog->owner, owner);
		c_dog->age = age;
	}

	return (c_dog);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int ch = 0;

	for (; *s != '\0'; s++)
	{
		ch++;
	}

	return (ch);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
