#include "main.h"

/**
 * print_triangle - use # to print triangle
 * @size: integer
 * Return: void
 */

void print_triangle(int size)
{
	int a, b, sp;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (sp = 0; sp < size - a; sp++)
				_putchar(' ');
			for (b = 0; b <= a; b++)
				_putchar('#');
		}
		_putchar('\n');
	}
}
