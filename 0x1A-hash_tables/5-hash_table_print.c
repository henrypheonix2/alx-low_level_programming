#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned int i;
hash_node_t *node;
int flag = 0;

if (!ht)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{
if (ht->array[i])
{
node = ht->array[i];
while (node)
{
if (flag == 1)
printf(", ");
printf("'%s': '%s'", node->key, node->value);
flag = 1;
node = node->next;
}
}
}
printf("}\n");
}
