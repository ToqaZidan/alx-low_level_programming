#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: pointer to hash table
 * @key: key to be add or update
 * @value: value of the key
 *
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *cpvalue;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cpvalue = strdup(value);
	if (cpvalue == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (ht->array[index]; index++)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = cpvalue;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(cpvalue);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = cpvalue;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
