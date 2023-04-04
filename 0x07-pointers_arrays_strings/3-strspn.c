#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: input string
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int nam = 0;
	int d_dave;

	while (*s)
	{
		for (d_dave = 0; accept[d_dave]; d_dave++)
		{
			if (*s == accept[d_dave])
			{
			nam++;
			break;
			}
			else if (accept[d_dave + 1] == '\0')
				return (nam);
		}
		s++;
	}
	return (nam);
}

