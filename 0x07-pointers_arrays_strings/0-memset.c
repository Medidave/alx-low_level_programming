#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: the start address of memory
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int dave = 0;

	for (dave = 0; n > 0; dave++)
	{
		s[dave] = b;
		n--;
	}
	return (s);
}

