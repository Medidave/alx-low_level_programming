#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars
 * and initializes it with a specific char c.
 * @size: size of array
 * @c: character to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if it fail
 */

char *create_array(unsigned int size, char c)
{
	char *my_pointer;
	unsigned int dave;

	my_pointer = malloc(sizeof(char) * size);
	if (size == 0 || my_pointer == NULL)
		return (NULL);

	for (dave = 0; dave < size; dave++)
		my_pointer[dave] = c;

	return (my_pointer);
}


