#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Define Items of Hash Tabel
typedef struct Hash_item {
  char *key;
  char *value;
  struct Hash_item *next;
} Hash_item;

//Define Hash table
typedef struct Hash_table_t {
  Hash_item **array;
  unsigned long int size;
} hash_table_t;

//creaation a hash table
hash_table_t *hash_table_create(unsigned long int size)
{
  hash_table_t *table;
  unsigned long int i = 0;

  table = malloc(sizeof(hash_table_t));
  if (table == NULL)
  {
    return NULL;
  }
  table->size = size;

  table->array = malloc(sizeof(Hash_item *) * size);
  if (table->array == NULL)
  {
    free(table);
    return NULL;
  }

  for (; i < size; i++)
  {
    table->array[i] = NULL;
  }

  return (table);
}

//Hash function
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

//a function that gives you the index of a key.
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
  unsigned long int hash_value, index;

  hash_value = hash_djb2(key);
  index = hash_value % size;

  return index;

}
//function add item
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  unsigned long int index;

  index = key_index(key, ht->size);

  ht->array[index]->value == value;

  return (1);
}

//main
int main(void)
{
hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    return (EXIT_SUCCESS);
}