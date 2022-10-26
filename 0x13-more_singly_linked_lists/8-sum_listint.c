#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - sum all the data of a `listint_t` linked list
  * @head: head
  *
  * Return: sum of all the data
  */
int sum_listint(listint_t *head)
{
	int c = 0;

	if (head)
	{
		while (head)
		{
			c += head->n;
			head = head->next;
		}
	}

	return (c);
}
