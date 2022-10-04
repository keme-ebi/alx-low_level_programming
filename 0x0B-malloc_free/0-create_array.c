#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char and initializes it with
 *	specific char
 * @size: size of array
 * @c: specific character
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(c) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
