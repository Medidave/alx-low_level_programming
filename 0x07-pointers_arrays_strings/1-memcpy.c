#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: destination to place coppied memory
 * @src:  memory source where n is stored
 * *@n: number of bytes
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int eli = 0;
	int dave = n;

	for (eli = 0; eli < dave; eli++)
	{
		dest[eli] = src[eli];
		n--;
	}
	return (dest);
}

