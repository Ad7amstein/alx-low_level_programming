#include "main.h"
/**
 * *rot13 - function that encodes a string using rot13.
 *
 * @str: array of characters
 * Return: array of characters (char*)
 */
char *rot13(char *str)
{
int i, n;
i = 0;
while (str[i])
{
if (!isalpha(str[i]))
{
i++;
continue;
}

n = str[i];
if (isupper(str[i]))
n = str[i] - 'A';
else if (islower(str[i]))
n = str[i] - 'a';

n += 13;
n %= 26;

if (isupper(str[i]))
n += 'A';
else if (islower(str[i]))
n += 'a';

str[i] = n;
i++;
}
return (str);
}