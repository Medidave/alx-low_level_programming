#include "main.h"

/**
 * _pow_recursion - a functions to returns the value of x
 * raised to the power of y
 * @x: The value to raise
 * @y: The power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}


