#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table = NULL;

if (size < 1)
return (NULL);

/* Allocate memory for the hash table */
hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
return (NULL);

/* Allocate memory for the array of pointers to nodes */
hash_table->array = calloc(size, sizeof(hash_node_t *));
if (hash_table->array == NULL)
{
free(hash_table);
return (NULL);
}

hash_table->size = size;

return (hash_table);
}
