#include "main.h"

/**
 * _isalpha - a function that checks
 *            if the given char is alphabet or not
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is alphabet
 *         otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);

	return (0);
}
