#include "lists.h"

/**
 * add_dnodeint - function that add new node at the beginning
 *
 * @head: The head pointer
 *
 * @n: The data
 *
 * Return: The address of new element or NULL if faild
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	/*Work in a new Node*/
	newNode->n = n;
	newNode->prev = NULL;
	if (!*head)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
		(*head)->prev = newNode;
		newNode->next = *head;
		*head = newNode;
	}

	return (newNode);
}
