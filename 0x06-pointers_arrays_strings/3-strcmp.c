#include "main.h"

/**
 * _strcmp - function that compares two strings.
 *	 @s1: first string to be compared
 *	 @s2: second string to be compared.
 * Return: end result -15, 15 and 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == 0)
			return (0);
	}
	return (s1[i] - s2[i]);
}
