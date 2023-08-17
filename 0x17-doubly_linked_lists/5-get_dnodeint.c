#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 *
 * @head: head node
 * @index: node position
 * Return: dlistint_t*
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);
	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (NULL);
	return (current);
}
