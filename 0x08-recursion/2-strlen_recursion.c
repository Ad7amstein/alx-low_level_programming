#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: string to get it's length
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 1;
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + i);
}
