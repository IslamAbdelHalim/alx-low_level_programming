#include "lists.h"

/**
 * delete_nodeint_at_index - function that delet a node
 *
 * @head: linked list
 *
 * @index: index of node which delete
 *
 * Retuen: 1 if success and -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*Delcare Variables*/
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int i = 0;
	
	/*check if list is empty*/
	if (*head == NULL)
		return(-1);

	while (i != index)
	{
		previous = current;
		current = current->next;
		i++;
	}
	previous->next = current->next;
	free(current);
	return (1);
}
