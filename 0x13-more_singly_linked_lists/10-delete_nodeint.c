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
	listint_t *prev, *cur, *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	prev = *head;
	cur = (*head)->next;
	while (cur != NULL && index > 1)
	{
		prev = cur;
		cur = cur->next;
		--index;
	}

	if (index > 1 || cur == NULL)
		return (-1);

	prev->next = cur->next;
	free(cur);
	return (1);
}
