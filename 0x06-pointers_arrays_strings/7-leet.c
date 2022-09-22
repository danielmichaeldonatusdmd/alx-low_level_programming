#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: input string
 * Return: pointer string
 */

char *leet(char *s)
{
	int n, m;

	char *p = "aAeEoOtTlL";
	char *q = "4433007711";

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (s[n] == p[m])
			{
				s[n] = q[m];
			}
		}
	}

	return (s);
}
