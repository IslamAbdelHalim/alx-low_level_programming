#include "lists.h"

/**
 * print_listint - function to print the nodes
 *
 * @h: pointer to linked list
 *
 * Return: The number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
