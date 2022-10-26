#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - Adds a new node at the beginning of a linked list
  * @head: The head of the linked list
  * @n: The value to add to the new node
  *
  * Return: address of the new element, or NULL
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ls;

	if (head != NULL)
	{
		ls = malloc(sizeof(listint_t));
		if (ls == NULL)
			return (NULL);

		ls->n = n;
		ls->next = *head;
		*head = ls;

		return (ls);
	}

	return (NULL);
}
