#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index index of a `listint_t` linked list
  * @head: head
  * @index: index
  *
  * Return: int
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c = 1;
	listint_t *new = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (c == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}

		temp = temp->next;
		c++;
	}

	return (-1);
}
