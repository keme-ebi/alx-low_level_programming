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
	unsigned int i = 0, j;

	c = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		j++;
	if (c == NULL)
		return (NULL);
	for (; j <= i; j++)
		c[j] = str[j];
	return (c);
}
