#include "hash_tables.h"

/**
 * hash_table_set - check the code
 * @ht: -hash table
 * @key: - key
 * @value: - values
 *
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  unsigned long int mykey;
  hash_node_t *col;
  
  if (!key)
    return (0);
mykey = key_index((unsigned char *)key, ht->size);
 if (ht->array[mykey] != 0)
   {
     col = malloc(sizeof(hash_node_t));
     col->key = strdup(key);
     col->value = strdup(value);
     col->next = ht->array[mykey];
     ht->array[mykey] = col;
     return (1);
   }
 ht->array[mykey]->key = strdup(key);
 ht->array[mykey]->value = strdup(value);
 ht->array[mykey]->next = NULL;
 return (1);
}
