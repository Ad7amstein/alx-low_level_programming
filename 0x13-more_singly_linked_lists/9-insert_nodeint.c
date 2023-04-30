#include "lists.h"
/**
 * *insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 *
 * @head: Pointer to the first node
 * @idx: index of the node new node
 * @n: node data
 * Return: listint_t*
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t)),
		  *cur = *head, *pre = NULL;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (idx--)
		{
			if (cur == NULL)
				return (NULL);
			pre = cur;
			cur = cur->next;
		}
		new_node->next = cur;
		pre->next = new_node;
	}
	return (new_node);
}
