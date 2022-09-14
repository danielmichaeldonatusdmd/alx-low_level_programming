#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int n;
	int HEX;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (HEX = 'a'; HEX <= 'f'; HEX++)
	{
		putchar(HEX);
	}
		putchar('\n');
	return (0);
}
