#include "main.h"
/**
 * *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: string to be returned
 * @src: string to be copied
 * Return: copied string (char*)
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];

dest[i] = src[i];

return (dest);
}
