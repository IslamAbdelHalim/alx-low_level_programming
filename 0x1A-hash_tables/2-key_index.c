#include "hash_tables.h"

/**
 * key_index - function that gives the index of key
 *
 * @key: The key
 *
 * @size: The size of of table
 *
 * Return: The index of key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
