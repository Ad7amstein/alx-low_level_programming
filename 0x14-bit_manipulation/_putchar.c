#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: A C program that prints _putchar, followed by a new line.
 *
 * Return: int - 0(Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
