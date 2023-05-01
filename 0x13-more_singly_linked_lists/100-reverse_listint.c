#include "lists.h"
/**
 * *reverse_listint - function that reverses a listint_t linked list.
 *
 * @head: Pointer to the first node
 * Return: listint_t*
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
