#include <stdlib.h>
#include "lists.h"

/**
  * sum_dlistint - Sum of all data in a doubly linked list
  * @head: head of the doubly linked list
  *
  * Return: sum of all data
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *act = head;
	int sum = 0;

	if (head)
	{
		while (act != NULL)
		{
			sum += act->n;
			act = act->next;
		}
	}

	return (sum);
}
