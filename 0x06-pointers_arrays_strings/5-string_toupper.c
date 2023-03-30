#include "main.h"
/**
 * *string_toupper - function that changes
 * all lowercase letters
 * of a string to uppercase.
 *
 * @str: array of characters
 * Return: pointer to char (char*)
 */
char *string_toupper(char *str)
{
int i;
i = 0;
while (str[i])
{
if ((str[i] >= 'a') && (str[i] <= 'z'))
str[i] = str[i] - 32;

i++;
}
return (str);
}
