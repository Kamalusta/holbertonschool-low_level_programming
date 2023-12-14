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
hash_node_t *new, *col = malloc(sizeof(hash_node_t));
if (!ht || !key || !col)
return (0);
mykey = key_index((unsigned char *)key, ht->size);
if (ht->array[mykey] != 0)
{
if (!strcmp(ht->array[mykey]->key, key))
{
ht->array[mykey]->value = strdup(value);
return (1);
}
col->key = strdup(key);
col->value = strdup(value);
col->next = ht->array[mykey];
ht->array[mykey] = col;
return (1);
}
free(col);
new = malloc(sizeof(hash_node_t));
if (!new)
return (0);
new->key = strdup(key);
new->value = strdup(value);
new->next = NULL;
ht->array[mykey] = new;
return (1);
}
