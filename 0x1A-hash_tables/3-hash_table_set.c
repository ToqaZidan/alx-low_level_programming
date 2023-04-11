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
	char *cpdvalue;
	unsigned long int index, ix;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cpdvalue = strdup(value);
	if (cpdvalue == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (ix = index; ht->array[ix]; ix++)
	{
		if (strcmp(ht->array[ix]->key, key) == 0)
		{
			free(ht->array[ix]->value);
			ht->array[ix]->value = cpdvalue;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(cpdvalue);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = cpdvalue;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
