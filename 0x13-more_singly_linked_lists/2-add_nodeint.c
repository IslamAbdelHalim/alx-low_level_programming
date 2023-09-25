#include "lists.h"

/**
 * add_nodeint - function that add a new node at the beginning
 *
 * @head: pointer to pointer of linked list
 *
 * @n: The data of new node
 *
 * Return: The address of new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	if (!head || !n)
		return (NULL);

	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode->next);
}
