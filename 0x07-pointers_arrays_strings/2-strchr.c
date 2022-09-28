#include "main.h"

/**
 *_strchr - a function that locates a character in a string.
 *@c: occurrence of the character
 *@s: in the string
 *Return: a pointer to the first occurrence of the character
 **/

char *_strchr(char *s, char c)
{
	int DAN;

	for (DAN = 0; s[DAN] >= '\0'; DAN++)
	{
		if (s[DAN] == c)
			return (s + DAN);
	}

	return ('\0');
}
