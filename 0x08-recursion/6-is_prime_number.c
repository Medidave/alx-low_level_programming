#include "main.h"

int actual_prime(int dave, int eli);

/**
 * is_prime_number - a function to returns 1 if an integer is a prime
 * otherwise returns 0
 * @n:the number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @dave: The number to evaluate
 * @eli: The iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int dave, int eli)
{
	if (eli == 1)
		return (1);
	if (dave % eli == 0 && eli > 0)
		return (0);
	return (actual_prime(dave, eli - 1));
}

