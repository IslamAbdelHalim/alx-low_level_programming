#include "lists.h"

/**
 * insert_nodeint_at_index - function That add node at lindex
 *
 * @head: The linked list
 *
 * @idx: the index which will add the node of it
 *
 * @n: The data of node
 *
 * Return: The pointer to node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*Decleare a variables*/
	listint_t *previousNode = *head;
	listint_t *newNode;
	unsigned int i = 0;

	/*Check if the linked list is empty*/
	if (*head == NULL)
		return (NULL);
	/*Create a node*/
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	/*Find The Index*/
	while (i != idx)
	{
		previousNode = previousNode->next;
		i++;
	}
	newNode->next = previousNode->next;
	previousNode->next = newNode;

	return (newNode);
}
