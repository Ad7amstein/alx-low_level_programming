#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i = 0, mul = 1;
	int j = 0;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	for (j = (int)i - 1; j >= 0; j--)
	{
		num += mul * (b[j] - '0');
		mul = mul << 1;
	}

	return (num);
}
