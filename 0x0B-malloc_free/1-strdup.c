#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that copies a string
 *	@str: the string to  be copied
 * Return: returns a pointer to a newly allocated space in memonry
 * which contains a copy of the given string
 */

char *_strdup(char *str)
{
	int i = 1;
	int j = 0;
	char *cpy;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	cpy = (char *)malloc(i * sizeof(char) + 1);
	if (cpy == NULL)
		return (NULL);
	while (j < i)
	{
		cpy[j] = str[j];
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}
