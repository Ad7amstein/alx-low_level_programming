#include "lists.h"
/**
 * free_list - free list
 *
 * @head: pointer to first node
 */
void free_list(list_t *head)
{
	list_t *curr, *next;

	curr = head;
	while (curr)
	{
		next = curr->next;
		free(curr->str);
		free(curr);
		curr = next;
	}
}
