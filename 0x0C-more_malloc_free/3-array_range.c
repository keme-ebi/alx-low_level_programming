#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ptr, i, c;

	if (min > max)
		return (NULL);
	c = (max - min) + 1;
	ptr = malloc(sizeof(*ptr) * c);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;
	return (ptr);
}
