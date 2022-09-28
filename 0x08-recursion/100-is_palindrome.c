#include "main.h"

/**
 * _strlen_recursion - returns legth of a string
 * @s: string
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * palindrome - palindrome checker
 * @s: string
 * @i: position
 * Return: int
 */

int palindrome(char *s, int i)
{
	if (i < 1)
		return (1);
	else if (*s == *(s + i))
		return (palindrome(s + 1, i - 2));
	else
		return (0);
}

/**
 * is_palindrome - returns 1 if string is palindrome, 0 if not
 * @s: string
 * Return: 1 if true, otherwise 0
 */

int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	return (palindrome(s, l - 1));
}
