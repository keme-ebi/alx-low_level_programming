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
	int j;

	if (str == NULL)
		return (NULL);
	c = malloc(sizeof(char) * 3);
	for (j = 0; str[j] != '\0'; j++)
		c[j] = str[j];
	for (; j < 3; j++)
		c[j] = '\0';
	return (c);
}
