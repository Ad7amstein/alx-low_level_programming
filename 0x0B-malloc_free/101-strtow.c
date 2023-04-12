#include "main.h"
/**
 * _strcmp - function that compares two strings.
 *
 * @s1: first string
 * @s2: second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

/**
 * **strtow - function that splits a string into words.
 *
 * @str: string
 * Return: char**
 */
char **strtow(char *str)
{
	char **res;
	int i, nwords, word_len, j, word_start, k;

	i = 0;
	j = 0;
	nwords = 0;
	if (_strcmp(str, "") == 0 || str == NULL)
		return (NULL);

	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i])
			nwords++;
		while (str[i] && str[i] != ' ')
			i++;
	}

	res = (char **)malloc(sizeof(char *) * (nwords + 1));
	if (res == NULL)
		return (NULL);

	i = 0;
	j = 0;
	word_start = 0;
	while (str[i])
	{
		word_len = 0;
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i])
			word_start = i;
		while (str[i] && str[i] != ' ')
		{
			word_len++;
			i++;
		}
		res[j] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (res[j] == NULL)
		{
			while (j >= 0)
			{
				free(res[j]);
				j--;
			}
			free(res);
			return (NULL);
		}
		for (k = 0; k < word_len; k++)
		{
			res[j][k] = str[word_start++];
		}
		res[j][k] = '\0';
		j++;
	}
	res[nwords] = NULL;
	return (res);
}
