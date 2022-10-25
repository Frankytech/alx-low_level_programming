#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to the addresss of the head of thye listint_ list 
 * @n: the integer for tthe new node to contain 
 * return: if the function faikls - NULL 
 * otherwise - the address of the new element 
 */
listint_t *add_nodeint(listint_t **head, const int n);
{
	listint_t *new;

	new = malloc (sizeof(listint_t));
	if (new == NULL)
			return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
