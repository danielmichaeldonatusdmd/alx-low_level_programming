#include "main.h"
/**
 * main - entry point
 *
 * Return: 0 Always (successfuly)
 */

int main(void)
{
	int n = 1;
	int CAL = 0;
		while (n < 1024)
	{
		if (n % 3 == 0)
			CAL += n;
		else if (n % 5 == 0)
			CAL += n;
		n++;
	}
	printf("%d\n", total);
	return (0);
}
