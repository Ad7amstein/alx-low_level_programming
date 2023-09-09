#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table
 *
 * @size: the size of the table
 * Return: Pointer to the created table (shash_table_t*)
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);

	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;
	sht->array = malloc(sizeof(shash_node_t) * size);
	if (sht == NULL)
	{
		free(sht);
		return (NULL);
	}

	for (i = 0; i < size; ++i)
		sht->array[i] = NULL;

	return (sht);
}

/**
 * shash_table_set - Inserts a new node into the hash table
 *
 * @ht: Pointer to the hash table
 * @key: Key to be inserted
 * @value: The value of the key
 * Return: int
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
}