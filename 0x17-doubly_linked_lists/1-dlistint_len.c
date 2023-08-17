#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - get list length
 *
 * @h: pointer to list head node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *current = h;

	if (h != NULL)
	{
		while (current)
		{
			current = current->next;
			nodes++;
		}
	}
	return (nodes);
}
