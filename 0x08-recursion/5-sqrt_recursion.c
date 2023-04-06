#include "main.h"
/**
 * calc_sqrt - compute the square root of the number
 *
 * @n: int
 * @i: int
 * Return: int
 */
int calc_sqrt(int n, int i)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (calc_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number.
 *
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (calc_sqrt(n, 1));
}
