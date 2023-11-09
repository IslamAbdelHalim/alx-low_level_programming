#include "lists.h"

/**
 * dlistint_len - function that return the number of elements
 *
 * @h: The list
 *
 * Return: The number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
