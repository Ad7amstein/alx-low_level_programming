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
	unsigned int i = 0;

	while (n)
	{
		if (index == i)
			break;
		n = n >> 1;
		i++;
	}

	if (index != i)
		return (-1);
	return (n & 1);
}
