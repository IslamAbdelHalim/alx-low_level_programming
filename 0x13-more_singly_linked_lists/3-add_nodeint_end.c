#include "lists.h"

/**
 * add_nodeint_end - function that add node at the end
 *
 * @head: pointer to pointer of list
 *
 * @n: Tha data
 *
 * Return: The of the new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = newNode;
	}

	newNode->next = NULL;

	return (newNode);
}
