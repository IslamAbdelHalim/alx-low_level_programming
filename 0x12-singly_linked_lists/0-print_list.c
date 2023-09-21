#include "lists.h"

/**
 * _strlen - function to return the length
 *
 * @s: The string of array
 *
 * Return: The length
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - function to print the list
 *
 * @h: pointer to first node
 *
 * Return: The length of node
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
