#include "main.h"

/**
* _calloc - allocates memory for an array of @nmemb elements of
* @size bytes each and returns a pointer to the allocated memory.
* @nmemb: allocate memory for array
* @size: allocate element of size bytes
* Return: pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *amen;
	unsigned int boy;

	if (nmemb == 0 || size == 0)
	return (NULL);
	amen = malloc(nmemb * size);
	if (amen == NULL)
	return (NULL);
	for (boy = 0; boy < (nmemb * size); boy++)
	amen[boy] = 0;
	return (amen);
}

