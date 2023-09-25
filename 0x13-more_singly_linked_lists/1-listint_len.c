#include "lists.h"

/**
 * listint_len - function that return The number of element
 *
 * @h: pointer to the list
 *
 * Return: The number of element
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
