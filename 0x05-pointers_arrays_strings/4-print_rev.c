#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: char
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	for (s[i] <= '\0'; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
