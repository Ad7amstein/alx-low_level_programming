#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;

	while (n || m)
	{
		num += ((n & 1) == (m & 1) ? 0 : 1);
		n = n >> 1;
		m = m >> 1;
	}

	return (num);
}
