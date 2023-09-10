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
 * create_item - Creates new item node
 *
 * @key: key to be inserted
 * @value: value to be inserted
 *
 * Return: new node to be inserted
 */
shash_node_t *create_item(const char *key, const char *value)
{
	shash_node_t *item;

	if (key == NULL || key[0] == '\0' || value == NULL)
		return (NULL);

	item = malloc(sizeof(shash_node_t));
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
	item->snext = NULL;
	item->sprev = NULL;
	return (item);
}

/**
 * shash_table_set - Inserts a new node into the hash table
 *
 * @ht: Pointer to the hash table
 * @key: Key to be inserted
 * @value: The value of the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current_node;
	unsigned long int index;

	new_node = create_item(key, value);
	if (new_node == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	if (current_node == NULL)
		ht->array[index] = new_node;
	else
	{
		if (strcmp(key, current_node->key) == 0)
		{
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		new_node->next = current_node;
		ht->array[index] = new_node;
	}
	insert_sorted(ht, new_node);
	return (1);
}

/**
 * insert_sorted - insert the node in a sorted DLL
 *
 * @ht: The hash table
 * @node: The new node to be inserted
 */
void insert_sorted(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *current_node = ht->shead;

	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = node;
		return;
	}

	if (strcmp(ht->shead->key, node->key) > 0)
	{
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
		return;
	}

	while (current_node)
	{
		if (strcmp(current_node->key, node->key) > 0)
		{
			node->snext = current_node;
			node->sprev = current_node->sprev;
			current_node->sprev->snext = node;
			current_node->sprev = node;
			return;
		}
		if (current_node->snext == NULL)
			break;
		current_node = current_node->snext;
	}

	current_node->snext = node;
	node->sprev = current_node;
	ht->stail = node;
}

/**
 * shash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table
 * @key: key to be retrived
 *
 * Return: The value associated with the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current_item;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
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

/**
 * shash_table_print - Prints the hash table in sorted order
 *
 * @ht: The hash table to be printed
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;
	int flag = 1;

	if (ht == NULL)
		return;

	current_node = ht->shead;
	printf("{");

	while (current_node)
	{
		if (flag == 0)
			printf(", ");
		else
			flag = 0;
		printf("'%s': '%s'", current_node->key, current_node->value);
		current_node = current_node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the hash table in reverse order
 *
 * @ht: The hash table to be printed
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;
	int flag = 1;

	if (ht == NULL)
		return;

	current_node = ht->stail;
	printf("{");

	while (current_node)
	{
		if (flag == 0)
			printf(", ");
		else
			flag = 0;
		printf("'%s': '%s'", current_node->key, current_node->value);
		current_node = current_node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a node form a hash table
 *
 * @ht: Hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current_item, *next_item;
	shash_table_t *table = ht;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; ++i)
	{
		if (ht->array[i])
		{
			current_item = ht->array[i];
			while (current_item)
			{
				next_item = current_item->next;
				free(current_item->key);
				free(current_item->value);
				free(current_item);
				current_item = next_item;
			}
		}
	}
	free(table->array);
	free(table);
}
