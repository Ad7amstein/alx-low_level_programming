#include "main.h"
/**
 * *leet - function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @str: pointer to chars
 * Return: pointer to chars (char*)
 */
char *leet(char *str)
{
int i;
i = 0;
while (str[i])
{
if (str[i] == 'a' || str[i] == 'A')
str[i] = '4';
if (str[i] == 'e' || str[i] == 'E')
str[i] = '3';
if (str[i] == 'o' || str[i] == 'O')
str[i] = '0';
if (str[i] == 't' || str[i] == 'T')
str[i] = '7';
if (str[i] == 'l' || str[i] == 'L')
str[i] = '1';

i++;
}
return (str);
}
