#include "main.h"
/**
 * *rot13 - function that encodes a string using rot13.
 *
 * @str: array of characters
 * Return: array of characters (char*)
 */
char *rot13(char *str)
{
char in[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
i = 0;
while (str[i])
{
j = 0;
while (in[j])
{
if (in[j] == str[i])
{
str[i] = out[j];
break;
}
j++;
}
i++;
}

return (str);
}
