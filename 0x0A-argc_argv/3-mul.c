#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 *
 * @argc: argument count (int)
 * @argv: command line arguments (char*)
 * Return: Success (0) - Failed (1)
 */
int main(int argc, char *argv[])
{
	int res, x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	res = x * y;
	printf("%d\n", res);
	return (0);
}
