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

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(c) * size);
	str[0] = c;
	str[1] = '\0';
	if (str == NULL)
		return (NULL);
	return (str);
}
