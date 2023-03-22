#include "main.h"
/**
 * times_table - print 9 times table
 */

void times_table(void)
{
int r, c, n;
r = 0;
while (r < 10)
{
_putchar('0' + 0);
c = 1;
while (c < 10)
{
_putchar(',');
_putchar(' ');
n = r *c;
if (n < 10)
{
_putchar(' ');
_putchar('0' + (n % 10));
}
else
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
}
c++;
}
_putchar('\n');
r++;
}
}
