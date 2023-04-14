#include <stdlib.h>
#include "main.h"


/**
* *array_range - creates an array of integers
* @min: minimum range of values stored
* @max: maximum range of values stored and number of elements
*
* Return: pointer to the new array
*/
int *array_range(int min, int max)
{
	int *mine;
	int dave, size1;

	if (min > max)
	return (NULL);

	size1 = max - min + 1;
	mine = malloc(sizeof(int) * size1);

	if (mine == NULL)
	return (NULL);

	for (dave = 0; min <= max; dave++)
	mine[dave] = min++;
	return (mine);
}
