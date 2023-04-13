#include "main.h"
/**
 * *_calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements
 * @size: size of the element
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *)mem + i) = 0;
	return (mem);
}
