#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated key
 *
 * @ht: the hash table
 *
 * @key: The key
 *
 * Return: the value associated the key
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || ht->array == NULL ||
			ht->size == 0 || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}

	return (NULL);
}
