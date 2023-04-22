#include "3-calc.h"
/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int (*res)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = get_op_func(argv[2]);
	printf("%d\n", res(a, b));
	return (0);
}
