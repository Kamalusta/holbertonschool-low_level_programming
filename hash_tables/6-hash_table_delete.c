#include "hash_tables.h"

/**
 * hash_table_delete - check the code
 * @ht: - hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *iter, *tmp;
for (i = 0; ht && i < ht->size; i++)
{
if (ht->array[i])
{
iter = ht->array[i];
while ((tmp = iter))
{
iter = iter->next;
free(tmp->key);
free(tmp->value);
free(tmp);
}
}
}
free(ht->array);
free(ht);
}
