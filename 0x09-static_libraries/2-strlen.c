#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 *
 * @s: string to return it's length
 * Return: The length of the string (int)
 */
int _strlen(char *s)
{
int len;
len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
