#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints
 * all possible combinations of single-digit numbers
 *
 * Return: int - 0(Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + 48);
if (i == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
