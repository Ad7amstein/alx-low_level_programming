#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: pointer to the first node
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
