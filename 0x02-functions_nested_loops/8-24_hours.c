#include "main.h"
/**
 * jack_bauer - program that prints every minute
 * starting from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
int hour, minute;
hour = 0;
minute = 0;
while (hour < 24)
{
while (minute < 60)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
minute++;
}
hour++;
}
}
