#include "lists.h"
/**
 * listint_len -  function that returns
 * the number of elements in a linked listint_t list.
 *
 * @h: pointer to the first element
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		n_nodes++;
		h = h->next;
	}

	return (n_nodes);
}
