#include "main.h"

/**
 * print_triangle - use # to print triangle
 * @size: integer
 * Return: void
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
				_putchar(' ');
			_putchar('#');
		}
		_putchar('\n');
	}
}
