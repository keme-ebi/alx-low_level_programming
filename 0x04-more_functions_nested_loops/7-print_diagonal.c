#include "main.h"

/**
 * print_diagonal - prints '\' n number of times
 * @n: integer
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('\\');
	_putchar('\n');
}
