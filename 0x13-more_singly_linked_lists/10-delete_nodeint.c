#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes
 * the node at index index of a listint_t linked list.
 *
 * @head: Pointer to the first node
 * @index: index of the element to be deleted
 * Return: int - Success (1), Fails (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur = *head, *pre = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		cur = *head;
		*head = (*head)->next;
		free(cur);
		return (1);
	}
	while (index--)
	{
		if (cur == NULL)
			return (-1);
		pre = cur;
		cur = cur->next;
	}

	if (cur == NULL)
		return (-1);
	pre->next = cur->next;
	free(cur);
	return (1);
}
