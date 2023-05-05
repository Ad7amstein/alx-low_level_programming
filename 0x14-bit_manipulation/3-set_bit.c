#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 *
 * @n: Pointer to number
 * @index: index to be setted
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = bit << index;
	*n = (*n | bit);
	return (1);
}
