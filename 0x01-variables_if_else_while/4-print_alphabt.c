#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * except q and e
 * followed by a new line.
 * Return: o Always (success)
 */

int main(void)
{
	char MIN = 'a';

	while (MIN <= 'z')
	{
		if (MIN != 'e' && MIN != 'q')
		{
			putchar(MIN);
		}
		MIN++;
	}
	putchar('\n');
	return (0);
}
