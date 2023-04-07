#include "main.h"

/**
 * factorial - returns the factorial of a number passed to it
 * @n: number to return the factorial from
 *
 * Return: factorial of the number n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}


