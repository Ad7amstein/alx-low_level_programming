#include "main.h"
/**
 * _isdigit -  function that checks for a digit (0 through 9).
 *
 * @c: check input function
 *
 * Return: int
 * Returns 1 if c is a digit
 * Returns 0 otherwise
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
