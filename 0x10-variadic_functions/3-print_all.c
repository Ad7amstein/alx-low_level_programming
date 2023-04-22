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
	int j, k, i, ok;
	char c;
	float f;
	char *s;
	char types[] = {'c', 'i', 'f', 's'};

	va_start(args, format);
	j = 0;
	while (format[j])
	{
		k = 0;
		while (types[k])
		{
			ok = 0;
			if (format[j] == types[k])
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
					else if (s)
					{
						printf("%s", s);
					}
				}
				ok = 1;
				break;
			}
			k++;
		}

		if (format[j + 1] && ok)
			printf(", ");
		j++;
	}
	va_end(args);
	printf("\n");
}
