#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int O, P, Q;

	for (O = 48; O < 58; O++)
	{
		for (P = 49; P < 58; P++)
		{
			for (Q = 50; Q < 58; Q++)
			if (Q > P && P > O)
			{
				putchar(O);
				putchar(P);
				putchar(Q);
				if (O != 55 || P != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
