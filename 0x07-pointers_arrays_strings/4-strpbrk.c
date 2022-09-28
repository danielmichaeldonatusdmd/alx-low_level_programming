#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 *
 *	@s: the string to be searched
 *
 *	@accept: the string with the pattern to be matched
 * 
 * Return: this returns a pointer to the byte in s that matches one of the
 * accepted bytes or NULL if no such byte is found
 */


char *_strpbrk(char *s, char *accept)
{
	int ABC;

	while (*s)
	{
		for (ABC = 0; accept[ABC]; ABC++)
		{
			if (*s == accept[ABC])
				return (s);
		}

		s++;
	}
	return ('\0');
}
