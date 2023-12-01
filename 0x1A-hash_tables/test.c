#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10

typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
}hash_table_t;

unsigned hash_function(char *name)
{
  unsigned int hash_value = 0;

  for (int j = 0; name[j]; j++)
  {
    hash_value += name[j];
    // hash_value = hash_value * name[j];
  }

  return hash_value % TABLE_SIZE;

}

hash_table_t *hash_table_create(unsigned long int size)
{
  hash_table_t *new_hash_table;

  new_hash_table = malloc(sizeof(hash_table_t));
  if (new_hash_table == NULL)
  {
    return NULL;
  }

  new_hash_table->size = size;

  new_hash_table->array = malloc(sizeof(hash_node_t *) * size);

  if(new_hash_table->array == NULL)
  {
    free(new_hash_table);
    return NULL;
  }
  
  for(unsigned long int i = 0; i < size; i++)
  {
    new_hash_table->array[i] = NULL;
  }

  return (new_hash_table);

}
int main()
{
  hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);

}