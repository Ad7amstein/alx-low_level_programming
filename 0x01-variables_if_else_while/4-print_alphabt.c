#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that  prints the alphabet in lowercase
 * except 'q' & 'e'
 *
 * Return: int - 0(Success)
 */
int main(void)
{
int i;
char c;
for (i = 0; i < 26; ++i)
{
c = i + 97;
if (c == 'q' || c == 'e')
{
continue;
}
putchar(c);
}
putchar('\n');
return (0);
}
