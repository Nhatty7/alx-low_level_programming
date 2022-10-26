#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - find the loop contained in linked list
 * @head: points to the head
 *
 * return: ...
 */
listint_t find_listint_loop(listint_t *head)
{
	listint_t *t, *h;
	
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
				t = t->next;
				h = h->next;
			}
			
			return (t);
		}
		
		t = t->next;
		h = h->next;
	}
	
	return (NULL);
}
