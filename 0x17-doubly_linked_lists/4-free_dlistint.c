#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees a list
 *
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	if (head == NULL)
		return;
	current = head;
	while (current->next)
	{
		current = current->next;
		free(current->prev);
	}
	free(current);
	head = NULL;
}
