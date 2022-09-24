#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @s: sprint
 * Return: pointer
 */

char *rot13(char *s)
{
	int m = 0, i;
	char aZ[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + m) != '\0')
	{

		for (i = 0; i < 52; i++)
		{
			if (*(s + aZ) == aZ[i])
			{
				*(s + m) = rot13[i];
				break;
			}
		}
		m++;
	}

	return (s);
}
