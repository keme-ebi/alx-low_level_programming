#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: char
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0, i;

	while ( *(str + len) != '\0')
		len++;
	if (len % 2 == 1)
		i = (len - 1) / 2;
	else if (len % 2 == 0)
		i = len / 2;
	for (i++; i < len; i++)
		_putchar(*(str + len));
	_putchar('\n');
}
