#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it.
 *
 * @argc: argument count (int)
 * @argv: command line arguments (char*)
 * Return: Always (0) int
 */
int main(int argc, char *argv[])
{
    (void)argv;
    printf("%d\n", argc - 1);
    return (0);
}
