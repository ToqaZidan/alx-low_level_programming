#include "hash_tables.h"

/**
 * hash_table_delete - A function that delets a hash table
 * @ht: Hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *nodx;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			nodx = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = nodx;
		}
	}
	free(ht->array);
	free(ht);
}
