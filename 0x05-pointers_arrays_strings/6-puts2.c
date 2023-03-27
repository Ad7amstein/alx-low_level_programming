#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: string to be printed
 */
void puts2(char *str)
{
int i;
i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
if (!str[i])
break;
i++;
}
_putchar('\n');
}
