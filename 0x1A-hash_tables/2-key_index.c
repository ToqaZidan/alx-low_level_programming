#include "hash_tables.h"

/**
 * key_index - A function that gets the index of a key in hash table
 *
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Description: shoul uses the djb2 algorithm.
 *
 * Return: The index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
