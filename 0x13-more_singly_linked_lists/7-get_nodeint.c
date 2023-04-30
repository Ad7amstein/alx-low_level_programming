#include "lists.h"
/**
 * *get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list.
 *
 * @head: pointer to the first node
 * @index: index of the node to get
 * Return: listint_t* - node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;

	while (index-- && node)
		node = node->next;

	if (node == NULL)
		return (NULL);
	else
		return (node);
}
