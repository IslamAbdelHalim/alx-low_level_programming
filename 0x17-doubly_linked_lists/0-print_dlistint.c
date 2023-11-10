#include "lists.h"

/**
 * print_dlistint - function that print all element in linked list
 *
 * @h: the linked list
 *
 * Return: The number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}