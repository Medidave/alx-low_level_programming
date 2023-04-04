#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: input character
 * @c: input char
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int med  = 0;

	for (med = 1; s[med] >= '\0'; med++)
	{
	if (s[med] == c)
	return (&s[med]);
	}
	return (0);
}

