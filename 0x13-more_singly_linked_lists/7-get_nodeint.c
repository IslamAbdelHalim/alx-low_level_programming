#include "lists.h"

/**
 * get_nodeint_at_index - function to get pointer to node index
 *
 * @head: linked list
 *
 * @index: The index of node which we want his pointer
 *
 * Return: The pointer to the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	if (!head)
		return (0);

	while (i != index)
	{
		current = current->next;
		i++;
	}
	
	return (current);
}
