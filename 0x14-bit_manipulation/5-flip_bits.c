#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int nbits = 0;

	while (num)
	{
		nbits += (num & 1ul);
		num = num >> 1;
	}

	return (nbits);
}
