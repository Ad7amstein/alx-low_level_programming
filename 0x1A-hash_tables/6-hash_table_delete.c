#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a node form a hash table
 *
 * @ht: Hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_item, *next_item;
	hash_table_t *table = ht;

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
