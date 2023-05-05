#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = n ^ m, nbits = 0;

	while (num)
	{
		nbits += (num & 1);
		num = num >> 1;
	}

	return (nbits);
}
