#include "3-calc.h"
/**
 * op_add - add two numbers
 *
 * @a: first number
 * @b: second number
 * Return: result (int)
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_add - subtract two numbers
 *
 * @a: first number
 * @b: second number
 * Return: result (int)
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_add - multiply two numbers
 *
 * @a: first number
 * @b: second number
 * Return: result (int)
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_add - divide two numbers
 *
 * @a: first number
 * @b: second number
 * Return: result (int)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_add - modulo two numbers
 *
 * @a: first number
 * @b: second number
 * Return: result (int)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
