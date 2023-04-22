#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 *
 * @format: data types
 * @...: va_list
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i, ok;
	char *s;
	char c;

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		ok = 1;
		switch (format[i])
		{
		case 'c':
			c = va_arg(args, int);
			printf("%c", c);
			break;

		case 'i':
			printf("%d", va_arg(args, int));
			break;

		case 'f':
			printf("%f", va_arg(args, double));
			break;

		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;

		default:
			ok = 0;
			break;
		}

		i++;
		if (format[i] && ok)
		{
			printf(", ");
		}
	}

	printf("\n");
	va_end(args);
}
