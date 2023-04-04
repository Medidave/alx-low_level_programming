#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int korku;

	while (*s)
	{
		for (korku = 0; accept[korku]; korku++)
		{
		if (*s == accept[korku])
		return (s);
		}
	s++;
	}
	return ('\0');
}

