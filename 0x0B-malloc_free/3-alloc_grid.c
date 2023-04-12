#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **meal;
	int xar, yar;

	if (width <= 0 || height <= 0)
		return (NULL);

	meal = malloc(sizeof(int *) * height);

	if (meal == NULL)
		return (NULL);

	for (xar = 0; xar < height; xar++)
	{
		meal[xar] = malloc(sizeof(int) * width);

		if (meal[xar] == NULL)
		{
			for (; xar >= 0; xar--)
				free(meal[xar]);
			free(meal);
			return (NULL);
		}
	}

	for (xar = 0; xar < height; xar++)
	{
		for (yar = 0; yar < width; yar++)
			meal[xar][yar] = 0;
	}

	return (meal);
}
