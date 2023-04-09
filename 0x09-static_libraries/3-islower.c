#include "main.h"

/**
 * _islower - a function that checks
 *            if the given char is lower or not
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is lower
 *         otherwise return 0
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);

return (0);
}
