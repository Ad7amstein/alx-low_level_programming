#include "main.h"
/**
 * *_strncpy - function that copies a string.
 *
 * @dest: first string
 * @src: second string to be copied
 * @n: startin byte from the first string
 * Return: string after coping (char*)
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (i < n && src[i])
{
dest[i] = src[i];
i++;
}
if (!src[i])
dest[i] = src[i];
return (dest);
}