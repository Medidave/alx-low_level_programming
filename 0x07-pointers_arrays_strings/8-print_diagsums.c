#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int eli1, eli2, dave;

	eli1 = 0;
	eli2 = 0;

	for (dave = 0; dave < size; dave++)
	{
		eli1 = eli1 + a[dave * size + dave];
	}
	for (dave = size - 1; dave >= 0; dave--)
	{
		eli2 += a[dave * size + (size - dave - 1)];
	}
	printf("%d, %d\n", eli1, eli2);
}

