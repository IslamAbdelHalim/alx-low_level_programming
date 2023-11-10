#include "lists.h"

/**
 * free_dlistint - function that frees a linked list
 *
 * @head: The head pointer to the list
*/

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
		head->prev = NULL;
	}
	free(head);
}
