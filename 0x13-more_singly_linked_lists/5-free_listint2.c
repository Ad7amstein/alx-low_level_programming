#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 *
 * @head: pointer to head
 */
void free_listint2(listint_t **head)
{
	listint_t *cur, *next;

	if (head == NULL)
		return;

	cur = *head;
	while (cur)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
	*head = NULL;
}
