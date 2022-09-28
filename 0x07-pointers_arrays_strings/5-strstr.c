#include "main.h"

/**
 * _strstr - Locates a substring.
 *	@haystack: The string to be searched.
 *	@needle: The substring to be located.
 *
 * Return: a pointer beg of substring or @Null if it not foound.
 *
 */


char *_strstr(char *haystack, char *needle)
{
	int x, y = 0, z;

	for (x = 0; haystack[x] != 0; x++)
	{
		z = x;
		y = 0;
		for (; needle[y] != 0; )
		{
			if (haystack[z++] == needle[y++])
			{
				continue;
			}
			break;
		}
		if (needle[y] == '\0')
			return ((haystack + x));
	}
	return ('\0');
}
