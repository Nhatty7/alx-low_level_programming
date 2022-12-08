#include <stdlib.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - Gets a node from a doubly linked list
  * @head: head of the doubly linked list
  * @index: index to find in the doubly linked list
  *
  * Return: node of the doubly linked list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *act = head;
	unsigned int cnt = 0;

	if (head)
	{
		while (act != NULL)
		{
			if (cnt == index)
				return (act);

			act = act->next;
			++cnt;
		}
	}

	return (NULL);
}
