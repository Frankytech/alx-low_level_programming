#include "list.h"

/**
 *
 * getnodeint_at_index - locates a given node of a list int_t linked list 
 * @head: a pointer to the head of a listint_t list.
 * @index: the index of the node to locate - indices start ar 0
 *
 * Return i node does not exist - NULL
 * otherwise return the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;
	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;

	}
	return (head);

}
