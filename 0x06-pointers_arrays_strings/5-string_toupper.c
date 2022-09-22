#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 *					of a string to uppercase
 *	 @ng: convert to upper case
 * Return: pointer
 */

char *string_toupper(char *ng)
{
	int i;

	for (i = 0; ng[i] != '\0'; i++)
	{
		if (ng[i] >= 'a' && ng[i] <= 'z')
		{
			ng[i] = ng[i] - 32;
		}
	}

	return (ng);
}
