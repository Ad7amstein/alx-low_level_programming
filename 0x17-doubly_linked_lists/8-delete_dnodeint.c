#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 *
 * @head: head node
 * @index: index to delete it's node
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free((*head));
			*head = NULL;
		}
		else
		{
			*head = (*head)->next;
			free((*head)->prev);
			(*head)->prev = NULL;
		}
		return (1);
	}
	while (current)
	{
		if (i == index)
		{
			if (current->next == NULL)
			{
				current->prev->next = NULL;
				free(current);
			}
			else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
				free(current);
			}
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
