#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 *
 * @h: head node
 * @idx: index to insert at
 * @n: new number to insert
 * Return: dlistint_t*
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *current = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		if (*h)
			new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			if (current->next)
			{
				new_node->next = current->next;
				current->next->prev = new_node;
			}
			current->next = new_node;
			new_node->prev = current;
			return (new_node);
		}
		current = current->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
