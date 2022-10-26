#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - count number of unique nodes
 * @head: points to the head
 *
 * return: ...
 */
size_t looped_listint_len(cons listint_t *head)
{
	const listint_t *t, *h;
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
 * print_listint_safe - prints a listint_t list
 * @head: points to the head
 *
 * return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, i = 0;
	
	node = looped_listint_len(head);
	
	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void*)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void*)head, head->n);
			head = head->next;
		}
		
		printf("-> [%p] %d\n", (void*)head, head->n);
	}
	
	return (node);
}
