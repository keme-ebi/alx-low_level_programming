#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 *	contains a copy of the string given as a parameter
 * @str: string
 * Return: pointer to newly allocated space
 */

char *_strdup(char *str)
{
	char *c;
	int i;

	if (str == NULL)
		return (NULL);
	c = malloc(sizeof(char) * 3);
	for (i = 0; i < 3; i++)
		c[i] = str;
	return (c);
}
