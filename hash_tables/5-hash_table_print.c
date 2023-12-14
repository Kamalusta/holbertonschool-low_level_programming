#include "hash_tables.h"
/**
 * hash_table_print - check the code
 * @ht: - hash table
 *
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
int j = 0;
unsigned long int i;
hash_node_t *iter = malloc(sizeof(hash_node_t));
if (!ht || !iter)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
iter = ht->array[i];
while (iter)
{
if (j)
printf(", ");
printf("'%s': '%s'", iter->key, iter->value);
j = 1;
iter = iter->next;
}
}
printf("}\n");
}
