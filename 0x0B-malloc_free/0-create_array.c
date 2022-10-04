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

	if (size == 0 && (malloc(size) == NULL))
		return (NULL);
	str = malloc(sizeof(char) * size);
	str[0] = c;
	str[1] = '\0';
	return (str);
	free(str);
}
