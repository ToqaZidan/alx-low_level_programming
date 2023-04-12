#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (unsigned long int i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;

			if (node != NULL)
			{
				printf(", ");
			}
		}
	}
	if (i < ht->size - 1 && ht->array[i] != NULL)
	{
		printf(", ");
	}

	printf("}\n");
}
