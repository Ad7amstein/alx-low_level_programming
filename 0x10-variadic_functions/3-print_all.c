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
	int j;
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);
	j = 0;
	while (format[j])
	{
		if (format[j] == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
		}
		else if (format[j] == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (format[j] == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f", f);
		}
		else if (format[j] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		else
		{
			j++;
			continue;
		}

		j++;
		if (format[j])
			printf(", ");
	}
	printf("\n");
}
