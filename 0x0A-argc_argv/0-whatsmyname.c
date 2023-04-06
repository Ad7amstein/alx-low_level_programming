#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 *
 * @argc: argument count (int)
 * @argv: command line arguments (char*)
 * Return: Always (0) int
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
