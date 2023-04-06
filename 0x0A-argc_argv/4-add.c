#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 *
 * @argc: argument count (int)
 * @argv: command line arguments (char*)
 * Return: Always (0) int
 */
int main(int argc, char *argv[])
{
	int res, i, x;

	res = 0;
	i = 1;
	while (i < argc)
	{
		x = atoi(argv[i]);
		if (x == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}
		res += x;
		i++;
	}

	printf("%d\n", res);
	return (0);
}
