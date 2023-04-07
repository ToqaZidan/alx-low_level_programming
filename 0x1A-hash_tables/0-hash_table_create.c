#include <stdlib.h>
#include "hash_table.h"

/**
 * hash_table_create - Function that Creates a hash table.
 * @size: The size of the array.
 *
 * Return: NULL If an error occurs
 *         Otherwise - a pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)

		return (NULL);

	ht->size = size;
	ht->count = 0; /* initialize count to 0 */
	ht->slots = calloc(size, sizeof(hash_node_t *));

	if (ht->slots == NULL)
		free(ht);
	return (NULL);

return (ht);
}
