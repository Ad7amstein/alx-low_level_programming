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
int i;
i = 0;
while (str[i])
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] = str[i + 1] - 32;
i++;
}
return (str);
}
