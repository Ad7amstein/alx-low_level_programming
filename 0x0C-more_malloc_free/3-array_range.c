#include "main.h"
/**
 * *array_range - function that creates an array of integers.
 *
 * @min: start number
 * @max: end number
 * Return: int*
 */
int *array_range(int min, int max)
{
	int *mem;
	int size, i;

	size = max - min + 1;
	if (min > max)
		return (NULL);
	mem = malloc(sizeof(int) * size);
	if (mem == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		mem[i - min] = i;
	return (mem);
}
