#include "main.h"

/**
 * _strlen - returns the length of string
 * @s: char
 * Return: string length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;
	return (len);
}
