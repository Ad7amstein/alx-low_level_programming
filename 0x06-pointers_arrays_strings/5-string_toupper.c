#include "main.h"
/**
 * *string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 *
 * Return: pointer to char (char*)
 */
char *string_toupper(char *str)
{
int i;
i = 0;
while (str[i])
{
if (str[i] >= 97 && str[i] <= 118)
str[i] = str[i] - 32;
i++;
}
return (str);
}
