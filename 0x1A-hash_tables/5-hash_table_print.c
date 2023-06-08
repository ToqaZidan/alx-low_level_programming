#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;


	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			node = ht->array[i];

			while (node != NULL)
			{
				printf(", '%s': '%s'", node->key, node->value);
				node = node->next;
			}
			if (i < ht->size - 1)
				printf(", ");
		}
	}


	printf("}\n");
}
