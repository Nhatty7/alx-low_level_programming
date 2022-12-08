#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes the node at index index of a linked list
  * @head: head of the doubly linked list
  * @index: index in which insert the new node
  *
  * Return: ...
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *act = NULL;
	dlistint_t *temp = NULL;
	unsigned int len = 0;

	if (head && *head)
	{
		len = dlistint_len(*head);
		if (index > len)
			return (-1);

		if (index == 0)
			return (delete_first_dnode(head));

		act = get_dnodeint_at_index(*head, index);
		if (act)
		{
			temp = act;
			if (len - 1 == index)
				act->prev->next = act->next;
			else
			{
				act->prev->next = act->next;
				act->next->prev = act->prev;
			}

			free(temp);
			return (1);
		}
	}

	return (-1);
}

/**
  * delete_first_dnode - Remove the first node of a doubly linked list
  * @head: The head of the doubly linked list
  *
  * Return: 1 if is deleted
  */
int delete_first_dnode(dlistint_t **head)
{
	dlistint_t *act = *head, *temp = NULL;

	temp = act;
	if (act->next)
	{
		act = act->next;
		act->prev = temp->prev;
		*head = act;
	}
	else
	{
		*head = NULL;
	}

	free(temp);
	return (1);
}

/**
  * get_dnodeint_at_index - Gets a node from a doubly linked list
  * @head: The head of the doubly linked list
  * @index: The index to find in the doubly linked list
  *
  * Return: The specific node of the doubly linked list
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

/**
  * dlistint_len - Counts the number of elements in a doubly linked list
  * @h: The double linked list to count
  *
  * Return: Number of elements in the doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		++lenght;
		h = h->next;
	}

	return (lenght);
}
