#include "main.h"
/**
 * *cap_string - function that capitalizes
 * all words of a string.
 *
 * @str: pointer to chars
 * Return: char*
 */
char *cap_string(char *str)
{
int i, j;
char delimiters[] = " \t\n,;.!?\"(){}";
i = 0;
while (str[i])
{
j = 0;
while (delimiters[j])
{
if (str[i] == delimiters[j])
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] = str[i + 1] - 32;
break;
}
j++;
}
i++;
}
return (str);
}
