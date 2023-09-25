#include "lists.h"

/**
 * free_listint - function That free linke list
 *
 * @head: The linked list
*/

void free_listint(listint_t *head)
{
	listint_t *delete = head;

	while (head != NULL)
	{
		delete = head;
		head = head->next;
		free(delete);
	}
}
