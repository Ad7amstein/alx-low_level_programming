#include "main.h"
/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: unsigned int
 * @c: char
 * Return: char*
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
