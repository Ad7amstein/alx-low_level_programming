#include "lists.h"
/**
 * pop_listint - function that deletes
 * the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: pointer to the first node
 * Return: int - head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int num;

	if (node == NULL)
		return (0);

	num = node->n;
	*head = (*head)->next;
	free(node);
	return (num);
}
