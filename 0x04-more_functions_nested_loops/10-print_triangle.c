#include "main.h"
/**
 * print_triangle - function that prints a triangle,
 * followed by a new line.
 *
 * @size: size of the triangle
 * 
 * Return: no return value
 */
void print_triangle(int size)
{
int line, hash, space;
for (line = 0; line < size; line++)
{
for (space = (size - 1) - line; space > 0; space--)
_putchar(' ');

for (hash = 0; hash < line + 1; hash++)
_putchar('#');

_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
