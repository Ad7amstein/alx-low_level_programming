#include "main.h"
/**
 * check - check if the string is palindorme
 *
 * @s: char*
 * @i: int
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
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not.
 *
 * @s: char*
 * Return: int
 */
int is_palindrome(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	if (i < 2)
		return (1);
	return (check(s, i, 0));
}
