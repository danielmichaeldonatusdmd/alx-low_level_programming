#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 *	@s1: first string.
 *	@s2: second string.
 *
 * Return: pointer of an array of chars
 */


char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int c = 0;
	int l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		l++;

	str = malloc(sizeof(char) * l);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[c++] = s1[i];

	for (i = 0; s2[i]; i++)
		str[c++] = s2[i];

	return (str);
}
