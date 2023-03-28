#include <stdio.h>

/**
 *_strlen -  a function that returns the length of a string.
 *@s: The string to get the length of
 *Return: The length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}





