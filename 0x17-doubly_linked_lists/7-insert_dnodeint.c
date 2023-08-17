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

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		while (i < idx && current->next != NULL)
		{
			current = current->next;
			i++;
		}
		if (i == idx - 1)
		{
			current->next = new_node;
			new_node->prev = current;
		}
		else if (i == idx)
		{
			new_node->next = current;
			new_node->prev = current->prev;
			current->prev->next = new_node;
			current->prev = new_node;
		}
		else
		{
			free(new_node);
			return (NULL);
		}
	}
	return (new_node);
}
