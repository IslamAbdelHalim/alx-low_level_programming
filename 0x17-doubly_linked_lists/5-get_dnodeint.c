#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth of linked list
 *
 * @head: The pointer to the first node
 *
 * @index: The index of the node
 *
 * Return: The nth of node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		else
		{
			temp = temp->next;
			i++;
		}
	}
	return (NULL);
}
