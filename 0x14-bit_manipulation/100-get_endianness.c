#include "main.h"

/**
 * get_endianness - Function that checks the endianness.
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned int value = 0x1234;
	unsigned char *ptr = (unsigned char *)&value;
	if (*ptr == 0x34)
		return (1);
	else
		return (0);
}