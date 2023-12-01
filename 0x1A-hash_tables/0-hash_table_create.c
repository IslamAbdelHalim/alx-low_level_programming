#include "hash_tables.h"

/**
 * hash_table_create - function that create a hash table
 *
 * @size: The size of hash table
 *
 * Return: The pointer to hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;
	unsigned long int i = 0;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
	{
		return (NULL);
	}

	new_hash_table->size = size;

	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_table == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}

	for (; i < size; i++)
	{
		new_hash_table->array[i] = NULL;
	}

	return (new_hash_table);
}
