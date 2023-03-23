#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */
void more_numbers(void)
{
int i, num;
i = 0;
while (i < 10)
{
for (num = 0; num <= 14; num++)
{
if (num <= 9)
{
_putchar(num + '0');
}
else
{
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
}
_putchar('\n');
i++;
}
}
