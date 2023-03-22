#include "main.h"
/**
 * print_last_digit - a program that prints the last digit
 * of the given number
 *
 * @n: checks the input of function
 *
 * Return: last digit of the number
 *
 */
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (n < 0)
last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);
}
