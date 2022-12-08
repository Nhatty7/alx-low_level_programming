#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_dnodeint_at_index - Inserts a new node at a given position
  * @h: head of the doubly linked list
  * @idx: index in which insert the new node
  * @n: number to insert in the new node
  *
  * Return: address of the new node or NULL
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *act = NULL;
	dlistint_t *nw_nod = NULL;
	unsigned int iter_times = 0, length = 0;

	if (h == NULL)
		return (NULL);

	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));

	length = dlistint_len(*h);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (length == idx)
		return (add_dnodeint_end(h, n));

	act = *h;
	while (act != NULL)
	{
		if (iter_times == idx)
		{
			nw_nod = create_node(n, act, act->prev);
			act->prev = nw_nod;
			act = nw_nod;
			act->prev->next = nw_nod;
			return (nw_nod);
		}

		act = act->next;
		++iter_times;
	}

	return (act);
}

/**
  * dlistint_len - Counts the number of elements in a doubly linked list
  * @h: The double linked list to count
  *
  * Return: Number of elements in the doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		++len;
		h = h->next;
	}

	return (len);
}

/**
  * create_node - Create a new node with values
  * @n: number of the new node
  * @next: next node of the new node
  * @prev: previous node of the new node
  *
  * Return: address of the new node created
  */
dlistint_t *create_node(unsigned int n, void *next, void *prev)
{
	dlistint_t *nw_nod = NULL;

	nw_nod = malloc(sizeof(dlistint_t));
	if (nw_nod == NULL)
		return (NULL);

	nw_nod->n = n;
	nw_nod->next = next;
	nw_nod->prev = prev;
	return (nw_nod);
}
