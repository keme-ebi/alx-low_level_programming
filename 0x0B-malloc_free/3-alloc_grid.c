#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr == NULL)
		{
			free(ptr[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
