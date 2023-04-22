#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: va_list (string)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *s;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
