#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 return (success)
 */

int main(void)
{
	int ch;


	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
