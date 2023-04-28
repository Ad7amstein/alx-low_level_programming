#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 *
 * @h: pointer to the first node
 * Return: size of the list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}
