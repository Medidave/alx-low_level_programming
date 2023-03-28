#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line
 * @str: The string to print
 * Return: Nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(str);
	}
	_putchar('/n');
}
