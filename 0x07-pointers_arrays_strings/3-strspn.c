/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the string to be tested
 * @accept: the string to find
 * Return: returns the number of bytes
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, p;
	unsigned int add = 0;

	for (m = 0; s[m] != 0; m++)
	{
		if (s[m] == ' ')
			break;
		for (p = 0; accept[p] != 0; p++)
		{
			if (s[m] == accept[p])
				add++;
		}
	}
	return (add);
}
