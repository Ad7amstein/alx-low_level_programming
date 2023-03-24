#include <stdio.h>
/**
 * sqrt - function that returns the square root of a number
 *
 * @x: number to find the square root of
 *
 * Return: square root of x
 */
double _sqrt(double x)
{
double result = x;
double precision = 0.00001;

while (result - x / result > precision)
result = (result + x / result) / 2;

return result;
}

/**
* main - Entry point
*
* Description: A C program that
* finds and prints the largest prime factor of the number 612852475143,
* followed by a new line.
*
* Return: int - 0(Success)
*/
int main(void)
{
long int n = 1231952;
int res;
int i;

while (n % 2 == 0)
{
n /= 2;
}

for (i = 3; i <= _sqrt(n); i += 2)
{
while (n % i == 0)
{
n /= i;
res = i;
}
}

if (n > 2)
res = n;
printf("%d\n", res);
return (0);
}
