#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: char
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0, i;

	while (len >= 0)
	{
		if (*(str + len) == '\0')
			break;
		len++;
	}
	if (len % 2 == 1)
		i = (len - 1) / 2;
	else
		i = len / 2;
	for (i++; i < len; i++)
		_putchar(*(str + len));
	_putchar('\n');
}
