#include "lists.h"
/**
 * sum_listint - function that returns
 * the sum of all the data (n) of a listint_t linked list.
 *
 * @head: Pointer to the first node
 * Return: int - sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
