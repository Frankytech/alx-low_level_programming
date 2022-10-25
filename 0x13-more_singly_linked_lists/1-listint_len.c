#include "lists.h"
#include <stdio.h>
/**
 *
 * liostint_len - returns the number of element inj a linked listint_t list .
 * @h: A pointer to thye head of the listint_t list.
 * Return the number of element in the listint_t list .
 */
size_t listint_len(const listint_t *h)
{	size_t nodes = 0;
	while (h)
	{
		nodes++;
		h = h->next;

	}

	return(nodes);
}



