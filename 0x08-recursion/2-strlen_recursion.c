#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string pointer
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		continue;
	return _strlen_recursion(s);
}
