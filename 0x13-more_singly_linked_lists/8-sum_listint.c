#include "lists.h"

/**
 * sum_listint - function that sum the all data in list
 *
 * @head: linked list
 *
 * Return: The sume linked list
*/

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
