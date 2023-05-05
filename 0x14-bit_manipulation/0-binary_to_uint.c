#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to unsigned int
 * @b: string containing the binary number to convert
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int dave;
	unsigned int eli = 0;

	if (!b)
		return (0);

	for (dave = 0; b[dave]; dave++)
	{
		if (b[dave] < '0' || b[dave] > '1')
			return (0);
		eli = 2 * eli + (b[dave] - '0');
	}

	return (eli);
}
