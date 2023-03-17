#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that  prints the alphabet
 * in lowercase in reverse order
 *
 * Return: int - 0(Success)
 */
int main(void)
{
int i;
char c;
for (i = 25; i >= 0; --i)
{
c = i + 97;
putchar(c);
}
putchar('\n');
return (0);
}
