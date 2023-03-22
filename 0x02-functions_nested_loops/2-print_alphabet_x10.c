#include "main.h"
/**
 * print_alphabet_x10 - program that prints the alphabet in lowercase 10x
 */
void print_alphabet_x10(void)
{
int i, j;
j = 10;
while(j--)
{
for (i = 'a'; i <= 'z'; ++i)
_putchar(i);

_putchar('\n');
}
}
