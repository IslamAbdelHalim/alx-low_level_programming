#include "hash_tables.h"

/**
 * hash_table_print - function that print hash table
 *
 * @ht: The hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item;
	char flag  = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", item->key, item->value);
			flag = 1;
			item = item->next;
		}
	}
	printf("}\n");
}
