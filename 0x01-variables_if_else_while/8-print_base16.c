#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints
 * all the numbers of base 16 in lowercase
 *
 * Return: int - 0(Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + 48);
}
for (i = 0; i < 6; ++i)
{
putchar(i + 97);
}
putchar('\n');
return (0);
}
