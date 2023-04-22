#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: string to be printed between numbers
 * @n: count
 * @...: va_list
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	if (n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
