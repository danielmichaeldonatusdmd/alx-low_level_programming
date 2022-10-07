#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 *	@s1: the first string
 *	@s2: the second string
 *	@n: the number of bytes of s2 to be concatenated
 * Return: returns a pointer to a new alocated memory
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dt;
	unsigned int l;
	unsigned int m;
	unsigned int x;

	if (s1 == NULL)
		l = 0;
	else
	{
		for (l = 0; s1[l])
			l++;
	}
	if (s2 == NULL)
		m = 0;
	else
	{
		for (m = 0; s2[m])
			m++;
	}
	if (m > n)
		m = n;
	dt = malloc(sizeof(char) * (l + m + 1));
	if (dt == NULL)
		return (NULL);

	for (x = 0; x < l)
		x++;
	dt[x] = s1[x];

	for (x = 0; x < m)
		x++;
	dt[x + l] = s2[x];

	dt[l + m] = '\0';

	return (dt);
}
