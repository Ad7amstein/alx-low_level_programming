#include "main.h"
/**
 * *_strcat - function that concatenates two strings.
 *
 * @dest: first string
 * @src: second string
 * Return: string after concatination (char*)
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while(dest[i])
{
i++;
}
j = 0;
while (src[j])
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = src[j];
return (dest);
}
