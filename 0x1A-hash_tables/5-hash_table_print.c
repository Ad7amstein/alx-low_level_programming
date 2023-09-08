#include "hash_tables.h"

/**
 * hash_table_print - Print the hash table
 *
 * @ht: The hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_item;
	unsigned long int i, flag = 1;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");

	for (i = 0; i < ht->size; ++i)
	{
		if (ht->array[i])
		{
			current_item = ht->array[i];
			while (current_item)
			{
				if (flag == 1)
				{
					printf("'%s': '%s'", current_item->key,
							current_item->value);
					flag = 0;
				}
				else
					printf(", '%s': '%s'",
				current_item->key, current_item->value);
				current_item = current_item->next;
			}
		}
	}
	printf("}\n");
}
