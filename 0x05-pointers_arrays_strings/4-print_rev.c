#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 *
 * @s: string to be printed
 */
void print_rev(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
print_rev(s + 1);
_putchar(*s);
}
}
