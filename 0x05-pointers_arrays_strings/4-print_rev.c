#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 *
 * @s: string to be printed
 */
void print_rev(char *s)
{
int len, i;
len = 0;
while (*s != '\0')
{
len++;
s++;
}
for (i = len; i >= 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
