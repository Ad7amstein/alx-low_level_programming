#include "main.h"
/**
 * *_strstr - function that locates a substring.
 *
 * @haystack: char*
 * @needle: char*
 * Return: char*
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, ok;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		k = i;
		ok = 1;
		while (needle[j])
		{
			if (needle[j] != haystack[k])
			{
				ok = 0;
				break;
			}
			j++;
			k++;
		}
		if (ok && !needle[j])
			return (haystack + i);
		i++;
	}
	return ('\0');
}
