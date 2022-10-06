#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int status = 98;
	unsigned int *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
		exit(status);
	return (ptr);
}
