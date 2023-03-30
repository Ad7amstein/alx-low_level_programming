#include "main.h"
/**
 * *strncat - function that concatenates two strings.
 * it will use at most n bytes from src
 *
 * @dest: first string
 * @src: second string
 * @n: nbytes to be used from src
 * Return: string after concatenation (char*)
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i])
{
i++;
}
j = 0;
while (src[j] && j < n)
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}
