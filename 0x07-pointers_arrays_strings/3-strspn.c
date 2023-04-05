#include "main.h"
/**
 * _strspn - function that gets
 * the length of a prefix substring.
 *
 * @s: char*
 * @accept: char*
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int ok;

	i = 0;
	while (s[i])
	{
		ok = 0;
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				ok = 1;
			}
			j++;
		}
		if (!ok)
			break;
		i++;
	}
	return (i);
}
