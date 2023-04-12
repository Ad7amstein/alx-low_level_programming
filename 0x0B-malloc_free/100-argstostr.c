#include "main.h"
/**
 * *argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: number of arguments
 * @av: arguments list
 * Return: char*
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[k++] = av[i][j];
			j++;
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
