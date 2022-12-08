#include <stdlib.h>
#include "lists.h"

/**
  * add_dnodeint_end - Adds a new node at the end of a doubly linked list
  * @head: head of the doubly linked list
  * @n: number to place in the new node
  *
  * Return: new head of the doubly linked list
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *act = NULL;
	dlistint_t *nw_nod = NULL;

	nw_nod = malloc(sizeof(dlistint_t));
	if (nw_nod == NULL)
		return (NULL);

	nw_nod->n = n;
	if (*head)
	{
		act = *head;
		while (act->next != NULL)
			act = act->next;

		nw_nod->next = NULL;
		nw_nod->prev = act;
		act->next = nw_nod;
		return (nw_nod);
	}

	nw_nod->next = *head;
	nw_nod->prev = NULL;
	*head = nw_nod;
	return (*head);
}
