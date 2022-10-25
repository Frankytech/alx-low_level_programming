#include "list.h"

/**
 * free_listing - frees a listing_t list
 * @head: a pointer to the head of the listint_t list to be formed 
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

}
