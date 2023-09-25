#include "lists.h"

/**
 * free_listint2 - function that free linked list and put head = NULL
 *
 * @head: pointer to pointer to linked list
*/

void free_listint2(listint_t **head)
{
	listint_t *delete;

	while (*head != NULL)
	{
		delete = *head;
		*head = (*head)->next;

		free(delete);
	}

	*head = NULL;
}
