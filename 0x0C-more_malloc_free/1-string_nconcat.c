#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 * @n: nbytes to be added from second string
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i, j;
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

	s3 = malloc(sizeof(char) * (size1 + n + 1));
	if (s3 == NULL)
		return (NULL);

	while (i < size1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < n && s2[j])
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';

	return (s3);
}
