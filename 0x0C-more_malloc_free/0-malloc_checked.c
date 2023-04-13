#include "main.h"
/**
 * *malloc_checked - function that allocates memory using malloc.
 *
 * @b: memory size
 * Return: void*
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
