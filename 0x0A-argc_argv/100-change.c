#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number
 * of coins to make change for an amount of money.
 *
 * @argc: argument count (int)
 * @argv: command line arguments (char*)
 * Return: Success (0) - Failed (1)
 */
int main(int argc, char *argv[])
{
	int num, ncoins, i;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	ncoins = 0;
	if (num < 0)
	{
		printf("%d\n", ncoins);
		return (0);
	}
	for (i = 0; i < 5; ++i)
	{
		ncoins += num / cents[i];
		num %= cents[i];
	}
	printf("%d\n", ncoins);
	return (0);
}
