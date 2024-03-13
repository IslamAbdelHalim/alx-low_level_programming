#include "search_algos.h"

/**
 * jump_list - function that make a jump search in linked list
 *
 * @list: pointer to first node in the list
 *
 * @size: the size of list
 *
 * @value: the value you search for
 *
 * Return: the first node locate value
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *head = list;
	int steps, i;

	if (list == NULL || size == 0)
		return (NULL);

	steps = sqrt(size);

	while (head->next != NULL)
	{
		list = head;
		for (i = 0; i < steps; i++)
		{
			head = head->next;
			if (head->next == NULL)
				break;
		}

		prinf("Value checked at index [%ld] = [%d]\n", head->index, head->n);

		if (head->n == value)
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			list->index, head->index);

	while (list != NULL && list != head->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);

		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
