#include "main.h"
/**
 * *str_concat - function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 * Return: char*
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, j;
	char *s3;

	size1 = 0;
	size2 = 0;
	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;

	s3 = (char *)malloc(sizeof(char) * (size1 + size2 + 1));
	if (s3 == NULL)
		return (NULL);

	while (i < size1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < size2)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';

	return (s3);
}
