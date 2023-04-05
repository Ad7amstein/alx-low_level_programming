#include "main.h"
/**
 * *_strpbrk - function that searches
 * a string for any of a set of bytes.
 *
 * @s: char*
 * @accept: char*
 * Return: char*
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
