#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list
  * @head: head
  * @index: index
  *
  * Return: listint_t linked list
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	if (head)
	{
		while (head)
		{
			if (c == index)
				return (head);

			head = head->next;
			c++;
		}
	}

	return (NULL);
}
