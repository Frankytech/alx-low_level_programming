#include "lists.h"

/**
 * sum-lisint - calculates the sum of all the data (n) of thye listint_t list 
 *
 * @head: A pointer to the headd of the listint_t list 
 * Return: if the list is empty - 0 otherwise the sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}


	return (sum);
}
