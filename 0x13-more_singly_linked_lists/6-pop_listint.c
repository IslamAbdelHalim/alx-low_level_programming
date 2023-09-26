#include "lists.h"

/**
 * pop_listint - function that delet the head
 *
 * @head: linked list
 *
 * Return: The value of head data
*/

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	*head = (*head)->next;
	free(current);

	return (data);
}
