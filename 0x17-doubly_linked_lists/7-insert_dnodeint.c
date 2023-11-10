#include "lists.h"

/**
 * insert_dnodeint_at_index - function that add a new node at given position
 *
 * @h: The head of linked list
 *
 * @idx: The index of of the list where the new node should be added
 *
 * @n: The data of new node
 *
 * Return: The address of new node or null
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *temp;

	if (!idx)
		return (NULL);
	/*Check if no linked list or index is zero add new node at the first*/
	if (!h || idx == 0)
		return (add_dnodeint(h, n));
	/*Make a new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	temp = *h;
	new_node->n = n;
	while (temp)
	{
		i++;
		/*Finding The Index*/
		if (i == idx)
		{
			/*New Node point to next temp(next node)*/
			new_node->next = temp->next;
			/*Make next node point to new by prev*/
			temp->next->prev = new_node;
			/*Make new node point to temp*/
			new_node->prev = temp;
			/*Make temp point to new node*/
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
	}
	/**
	 * If the index is the last index of list
	 * then add the new node at the end point
	 */
	if (++i == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	/*else if the index is more than list or no index then return null*/
	return (NULL);
}
