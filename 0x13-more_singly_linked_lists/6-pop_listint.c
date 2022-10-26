#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - deletes the head node of a `listint_t` linked list
  * @head: head to delete
  *
  * Return: int
  */
int pop_listint(listint_t **head)
{
	listint_t *hd;
	int n = 0;

	if (*head != NULL)
	{
		hd = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = hd;
	}

	return (n);
}
