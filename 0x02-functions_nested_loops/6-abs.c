#include "main.h"
/**
 * _abs - function that coputes the absoute
 * value of the given number
 *
 * @n: checks input of function
 * 
 * Return: the absulte value of the given number
 *
 */
int _abs(int n)
{
if ((n > 0) || (n == 0))
return (n);
else
return (-n);
}