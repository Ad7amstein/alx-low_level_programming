#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: counter
 * @...: va_list
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	int i, sum;

	if (n == 0)
		return (0);
	va_start(nums, n);
	sum = 0;
	for (i = 0; i < (int)n; i++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
