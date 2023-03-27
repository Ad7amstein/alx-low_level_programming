#include "main.h"
/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
int len, i;
len = 0;
while (str[len])
len++;

i = (len / 2);
if (len % 2 != 0)
i++;

for (; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
