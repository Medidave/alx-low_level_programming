#include "main.h"

/**
 * print_binary - a funct that prints the binary
 * equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int a, count_ = 0;
	unsigned long int cur;

	for (a = 63; a >= 0; a--)
	{
		cur = n >> a;

		if (cur & 1)
		{
			_putchar('1');
			count_++;
		}
		else if (count_)
			_putchar('0');
	}
	if (!count_)
		_putchar('0');
}


