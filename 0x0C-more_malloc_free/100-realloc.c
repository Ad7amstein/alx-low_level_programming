#include "main.h"
/**
 * *_realloc - function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size:  is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: void*
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int len, i;
	void *mem;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (old_size == new_size)
		return (ptr);
	if (old_size > new_size)
		len = new_size;
	else
		len = old_size;
	mem = malloc(new_size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		*((char *)mem + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (mem);
}
