#include "hash_tables.h"

/**
 * create_item - Creates new item node
 *
 * @key: key to be inserted
 * @value: value to be inserted
 *
 * Return: new node to be inserted
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;

	if (key == NULL || key[0] == '\0' || value == NULL)
		return (NULL);

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);

	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item);
		return (NULL);
	}
	item->value = strdup(value);
	if (item->value == NULL)
	{
		free(item->key);
		free(item);
		return (NULL);
	}
	item->next = NULL;
	return (item);
}

/**
 * hash_table_set - insert a new node to the hash table
 *
 * @ht: The hash table
 * @key: the key to be inserted
 * @value: the value of the key to be inserted
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *current_item;
	unsigned long int index;

	item = create_item(key, value);
	if (item == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_item = ht->array[index];
	if (current_item == NULL)
		ht->array[index] = item;
	else
	{
		if (strcmp(key, current_item->key) == 0)
		{
			free(item->key);
			free(item->value);
			free(item);
			free(current_item->value);
			current_item->value = strdup(value);
			return (1);
		}
		item->next = current_item;
		ht->array[index] = item;
	}
	return (1);

}
