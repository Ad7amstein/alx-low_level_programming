#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 *
 * @name: name of the person
 * @f: function to print with
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
