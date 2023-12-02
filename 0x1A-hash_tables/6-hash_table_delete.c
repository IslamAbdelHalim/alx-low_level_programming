#include "hash_table.h"

/**
 * hash_table_delete - function that free hash table
 *
 * @ht: The hash tabke
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		while (ht->array[i] != NULL)
		{
			current = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i]->next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
