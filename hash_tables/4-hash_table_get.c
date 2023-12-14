#include "hash_tables.h"
/**
 * hash_table_get - check the code
 * @ht: -hash table
 * @key: - key
 *
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int mykey;
hash_node_t *iter = malloc(sizeof(hash_node_t));
if (!ht || !key || !iter)
return (NULL);
mykey = key_index((unsigned char *)key, ht->size);
iter = ht->array[mykey];
while (iter)
{
if (!strcmp(iter->key, key))
return (iter->value);
else
iter = ht->array[mykey]->next;
}
return (NULL);
}
