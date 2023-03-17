#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints
 * all possible combinations of two-digit numbers
 *
 * Return: int - 0(Success)
 */
int main(void)
{
int i, j, n1, n2, n3, n4;

for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
n1 = i / 10;
n2 = i % 10;
n3 = j / 10;
n4 = j % 10;
if (n1 == n3 && n2 == n4)
{
continue;
}
putchar(n1 + '0');
putchar(n2 + '0');
putchar(' ');
putchar(n3 + '0');
putchar(n4 + '0');
if (n1 == 9 && n2 == 8 && n3 == 9 && n4 == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
