#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 *	@ac: argument count.
 *	@av: argument vector.
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int c;
	int i;
	int j;
	int a;

	if (ac == 0)
		return (NULL);
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	str = malloc((c + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = j = a = 0; a < c; j++, a++)
	{
		if (av[i][j] == '\0')
		{
			str[a] = '\n';
			i++;
			a++;
			j = 0;
		}
		if (a < c - 1)
			str[a] = av[i][j];
	}
	str[a] = '\0';
	return (str);
}
