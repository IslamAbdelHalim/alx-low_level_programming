#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: Pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		size++;
		if (current <= current->next)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			*h = NULL;
			break;
		}
		printf("[%p] %d\n", (void *)current, current->n);
		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;
	return (size);
}
