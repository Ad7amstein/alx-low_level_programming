#include "main.h"

/**
 * print_sign - a function that checks
 *            if the given number is positive
 *            or negative or zero
 *
 * @c: checks input of function
 *
 * Return: return 1 if n is positive
 *         return 0 if n is 0
 *         return -1 if n is negative
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
