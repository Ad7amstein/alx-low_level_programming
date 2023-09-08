#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table
 * @key: key to be retrived
 *
 * Return: The value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_item;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	current_item = ht->array[index];
	if (current_item == NULL)
		return (NULL);
	while (current_item)
	{
		if (strcmp(current_item->key, key) == 0)
			return (current_item->value);

		current_item = current_item->next;
	}
	return (NULL);
}
