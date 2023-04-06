#include "main.h"
/**
 * check - check if the string is palindorme
 *
 * @s: char*
 * @i: int
 * @n: int
 * Return: int
 */
int check(char *s, int n, int i)
{
	if (i >= (n / 2))
		return (1);
	if (s[i] != s[n - i - 1])
		return (0);
	return (check(s, n, i + 1));
}

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

/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not.
 *
 * @s: char*
 * Return: int
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s);
	if (i < 2)
		return (1);
	return (check(s, i, 0));
}
