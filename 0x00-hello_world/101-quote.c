#include <unistd.h>

/**
 * main - Entry poin
 *
 * Description: A C pogram that prints exactly and that piece of art is useful"
 * - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
 *
 * Return: Always 1(Fail)
*/
int main(void)
{
char qoute[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
 write(1, qoute, (sizeof(qoute) / sizeof(char)) - 1);
return (1);
}
