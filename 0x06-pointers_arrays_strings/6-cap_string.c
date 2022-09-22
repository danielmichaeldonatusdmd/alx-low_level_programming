#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: pointer to the string
 * Return: pointer
 */

char *cap_string(char *s)
{
	int n = 0, i;
	int sm[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + n) >= 97 && *(s + n) <= 122)
		*(s + n) = *(s + n) - 32;
	n++;
	while (*(s + n) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + n) == sm[i])
			{
				if ((*(s + (n + 1)) >= 97) && (*(s + (n + 1)) <= 122))
				*(s + (n + 1)) = *(s + (n + 1)) - 32;
				break;
			}
		}
		n++;
	}
	return (s);
}
