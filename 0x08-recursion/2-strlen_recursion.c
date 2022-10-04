#include "main.h"

/**
 * _strlen_recursion - A function that calculate the length of a string
 *	@s: string to be executed
 * Return: calculated length of the string
 */

int _strlen_recursion(char *s)
{
	int add = 0;

	if (*s != '\0')
	{
		add++;
		add += _strlen_recursion(s + 1);
	}
	return (add);
}
