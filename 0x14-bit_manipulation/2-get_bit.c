#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 *
 * @n: (lu) number
 * @index: index of the bit to get
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0, size = 0;
	int bit = 0;

	while (n)
	{
		if (index == size)
		{
			bit = n & 1;
			i = index;
		}
		n = n >> 1;
		size++;
	}

	if (index >= size || i != index)
		return (-1);

	return (bit);
}
