#include "lists.h"
/**
 * _strlen - function that returns the length of a string.
 *
 * @s: string to return it's length
 * Return: The length of the string (int)
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * *add_node - add a new node to the list
 *
 * @head: pointer to the first node
 * @str: string to be added
 * Return: list_t*
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = _strlen(str);
	node->next = (*head);
	(*head) = node;

	return (node);
}
