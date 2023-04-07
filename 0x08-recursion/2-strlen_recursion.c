#include "main.h"
/**
 * _strlen_recursion - The lenght of the string passed is returned
 * @s: string to be measured.
 *
 * Return: The length of the string passed.
 */
int _strlen_recursion(char *s)
{
	int lenght_of_string = 0;

	if (*s)
	{
		lenght_of_string++;
		lenght_of_string += _strlen_recursion(s + 1);
	}

	return (lenght_of_string);
}

