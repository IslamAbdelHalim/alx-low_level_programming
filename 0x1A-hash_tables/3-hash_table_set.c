#include "hash_tables.h"

/**
 * hash_table_set - function that adds element to the hash table
 *
 * @ht: the hash table
 *
 * @key: The key
 *
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded or 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	/* check if the key element is exist*/
	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			/*Update value*/
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			if (ht->array[index]->value == NULL)
				return (0);
			return (1);
		}
		ht->array[index] = ht->array[index]->next;
	}
	/*if the key not exist create a new node*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
