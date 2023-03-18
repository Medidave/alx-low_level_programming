#include <stdio.h>
/**
 * main - a program that prints all possible different combinations of two digits.
 * Return: always 0
 */

int main(void)
{
	int d, p;

	for (d = '0'; d < '9'; d++)
	{
	for (p = d + 1; p <= '9'; p++)
	{
	if (p != d)
	{
	putchar(d);
	putchar(p);
	if (d == '0' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);

}

				

				

