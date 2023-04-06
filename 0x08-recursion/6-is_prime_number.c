#include "main.h"
/**
 * is_prime - check if the number is prime
 *
 * @n: int
 * @i: int
 * Return: int
 */
int is_prime(int n, int i)
{
	if (n <= 2)
	{
		if (n == 2)
			return (1);
		else
			return (0);
	}
	if (n % i == 0)
		return (0);
	if (i * i >= n)
		return (1);
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * @n: number to check
 * Return: int
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
