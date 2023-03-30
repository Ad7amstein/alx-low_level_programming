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
int i, j;
char key[] = {'A', 'E', 'O', 'T', 'L'};
int value[] = {4, 3, 0, 7, 1};
i = 0;
while (str[i])
{
for (j = 0; j < 5; j++)
{
if ((str[i] == key[j]) || (str[i] == key[j] + 32))
str[i] = value[j] + '0';
}
i++;
}
return (str);
}
