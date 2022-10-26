#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: head
  * @idx: index
  * @n: ...
  *
  * Return: ...
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nd, *i;
	unsigned int c = 1;

	if (head)
	{
		nd = malloc(sizeof(listint_t));
		if (nd == NULL)
			return (NULL);

		nd->n = n;
		if (idx > 0)
		{
			i = *head;
			while (i)
			{
				if (c == idx)
				{
					nd->next = i->next;
					i->next = nd;
					return (nd);
				}
				i = i->next;
				c++;
			}
			if (idx > c)
				return (NULL);
		}
		else
		{
			nd->next = *head;
			*head = nd;
		}
		return (nd);
	}
	return (NULL);
}
