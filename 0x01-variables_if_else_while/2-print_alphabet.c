#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that  prints the alphabet in lowercase
 *
 * Return: int - 0(Success)
 */
int main(void)
{
int i;
for (i = 97; i < 123; ++i)
{
putchar(i);
}
putchar('\n');
return (0);
}
