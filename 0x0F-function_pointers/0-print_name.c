#include "function_pointers.h"
/**
 * print_name - 
 * 
 * @name: name of the person
 * @f: function to print with
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
