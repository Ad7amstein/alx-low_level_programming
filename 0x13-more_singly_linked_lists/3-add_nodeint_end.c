#include "lists.h"
/**
 * *add_nodeint_end - function that adds
 * a new node at the end of a listint_t list.
 *
 * @head: pointer to first node
 * @n: number to add
 * Return: listint_t*
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *last;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		last = *head;
		while (last->next)
			last = last->next;

		last->next = node;
	}
	return (node);
}
