#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - sum list elements
 *
 * @head: head node
 * Return: sum of all list elements (int)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
