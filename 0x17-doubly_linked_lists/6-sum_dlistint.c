#include "lists.h"

/**
 * sum_dlistint - function that return the sum of all data
 *
 * @head: The pointer to linked list
 *
 * Return: The sum of all data in linked list
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (!head)
		return (sum);

	temp = head;
	while (temp->next != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	sum += temp->n;
	return (sum);
}
