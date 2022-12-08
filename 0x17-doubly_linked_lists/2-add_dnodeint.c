#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_dnodeint - Adds a new node at the beginning of a doubly linked list
  * @head: The head of the doubly linked list
  * @n: The number to place in the new node
  *
  * Return: new head of the doubly linked list
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw_nod = NULL;

	nw_nod = malloc(sizeof(dlistint_t));
	if (nw_nod == NULL)
		return (NULL);

	nw_nod->n = n;
	if (*head)
	{
		nw_nod->next = *head;
		nw_nod->prev = (*head)->prev;
		(*head)->prev = nw_nod;
		*head = nw_nod;
		return (*head);
	}

	nw_nod->next = *head;
	nw_nod->prev = NULL;
	*head = nw_nod;
	return (*head);
}
