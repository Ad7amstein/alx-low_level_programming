#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number
 * of coins to make change for an amount of money.
 *
 * @argc: argument count (int)
 * @argv: command line arguments (char*)
 * Return: Always (0) int
 */
int main(int argc, char *argv[])
{
	int num, ncoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	ncoins = 0;
	if (num < 0)
		printf("%d\n", 0);

	ncoins += num / 25;
	num %= 25;
	ncoins += num / 10;
	num %= 10;
	ncoins += num / 5;
	num %= 5;
	ncoins += num / 2;
	num %= 2;
	ncoins += num / 1;
	num %= 1;
	printf("%d\n", ncoins);
	return (0);
}
