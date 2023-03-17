#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that print digits
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
putchar('\n');
return (0);
}
