#include "main.h"
/**
 * print_to_98 - program  that prints
 * all natural numbers from n to 98
 *
 * @n: the starting number
 */
void print_to_98(int n)
{
int i;
i = n;
while (i != 98)
{
printf("%d, ", i);
if (i > 98)
i--;
else
i++;
}
printf("98\n");
}
