#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * free_dlistint - Free a doubly linked list
  * @head: head of the doubly linked list
  *
  * Return: nothing.
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *act = head, *next = NULL;

	while (act != NULL)
	{
		next = act->next;
		free(act);
		act = next;
	}
}
