#include "hash_tables.h"

/**
 * key_index - Get the index of a key.
 *
 * @key: key to be indexed
 * @size: hash table size
 *
 * Return: the index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
