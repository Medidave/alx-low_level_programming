#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings.
 * @dest: The string to be appended
 * @src: The string to be appended upon
 * @n: The number of byted from src to be appended to dest
 * Return: A pointer to the resulting sting dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}



