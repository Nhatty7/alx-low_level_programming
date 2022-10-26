#include "lists.h"
#include <stdio.h>

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - count number of unique nodes
 * @head: points to the head
 *
 * return: ...
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *t, *h;
	size_t node = 1;
	
	if (head == NULL || head->next == NULL)
		return (0);
	
	t = head->next;
	h = (head->next)->next;
	
	while (h)
	{
		if (t == h)
		{
			t = head;
			while (t != h)
			{
				node++;
				t = t->next;
				h = h->next;
			}
			
			t = t->next;
			while (t != h)
			{
				node++;
				t = t->next;
			}
			
			return (node);
		}
		
		t = t->next;
		h = h->next;
	}
	
	return (0);
}

/**
 * free_listint_safe - frees a listint_t list
 * @h: points to the head
 *
 * return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node, i;
	listint_t *temp;
	
	node = looped_listint_count(*h);
	
	if (node == 0)
	{
		for (; h != NULL && *h != NULL; node++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (i = 0; index < node; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	
	h = NULL;
	
	return (node);
}
