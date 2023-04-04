#include "main.h"
/**
 * *_strchr - function that locates a character in a string.
 *
 * @s: char*
 * @c: char (character to be found)
 * Return: char*
 */
char *_strchr(char *s, char c)
{
int i;
i = 0;
while (s[i])
{
if (s[i] == c)
return (s + i);
i++;
}
return ('\0');
}
