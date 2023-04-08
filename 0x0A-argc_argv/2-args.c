#include <stdio.h>
/**
 * main - Write a program that prints all arguments it receives.
 *
 * @argc: argument count (int)
 * @argv: command line arguments (char*)
 * Return: Always (0) int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
