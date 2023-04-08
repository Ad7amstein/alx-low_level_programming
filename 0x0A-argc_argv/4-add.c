#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 *
 * @argc: argument count (int)
 * @argv: command line arguments (char*)
 * Return: Success (0) - Failed (1) - (int)
 */
int main(int argc, char *argv[])
{
	int res, i, x, j;

	res = 0;
	i = 1;
	while (i < argc)
	{
		x = atoi(argv[i]);
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		res += x;
		i++;
	}

	printf("%d\n", res);
	return (0);
}
