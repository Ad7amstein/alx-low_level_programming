#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print list elements
 *
 * @h: pointer to list head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *current = h;

	if (h != NULL)
	{
		while (current)
		{
			printf("%d", current->n);
			current = current->next;
			nodes++;
		}
	}
	return nodes;
}