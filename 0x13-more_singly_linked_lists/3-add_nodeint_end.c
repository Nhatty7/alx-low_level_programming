#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - Adds a new node to the end of a linked list
  * @head: The head of the linked list
  * @n: The value to add to the end of the linked list
  *
  * Return: address of the new element, or NULL
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ls, *temp;

	if (head)
	{
		ls = malloc(sizeof(listint_t));
		if (ls == NULL)
			return (NULL);

		ls->n = n;
		ls->next = NULL;

		if (*head == NULL)
		{
			*head = ls;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = ls;
			return (temp);
		}
	}

	return (NULL);
}
