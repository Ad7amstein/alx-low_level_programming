#include "main.h"
/**
 * *_strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: char*
 * Return: char*
 */
char *_strdup(char *str)
{
	int size, i;
	char *str2;

	if (str == NULL)
		return (NULL);

	size = 0;
	i = 0;
	while (str[size])
	{
		size++;
	}
	str2 = (char *)malloc(sizeof(char) * (size + 1));
	if (str2 == NULL)
		return (NULL);

	while (i < size)
	{
		str2[i] = str[i];
		i++;
	}
	return (str2);
}
