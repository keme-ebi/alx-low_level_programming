#include "main.h"

/**
 * main - prints out _putchar
 * Return: always 0.
 */

int main(void)
{
	char printchar[9] = "_putchar";
	int c = 0;

	for (c = 0; c < 8; c++)
	{
		_putchar(printchar[c]);
	}
	_putchar('\n');
	return (0);
}
