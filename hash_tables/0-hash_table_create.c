#include "hash_tables.h"

/**
 * hash_table_create - check the code for
 * @size: -  size of hash table
 *
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *myht;
myht = malloc(sizeof(hash_table_t));
if (!myht)
return (NULL);
myht->size = size;
myht->array = calloc(size, sizeof(hash_node_t *));
if (!myht->array)
{
free(myht);
return (NULL);
}
return (myht);
}
