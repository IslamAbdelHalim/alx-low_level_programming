#include "lists.h"

/**
 * delete_dnodeint_at_index - function that delete node at index point
 *
 * @head: The point to first node
 *
 * @index: The index of point
 *
 * Return: 1 if it succeeded and -1 if not
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (!*head)
		return (-1);

	for (; index != 0; index--)
		if (temp == NULL)
			temp = temp->next;
	/*check if the index is the first node*/
	if (temp == *head)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
