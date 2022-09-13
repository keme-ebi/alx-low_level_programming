#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: always void
 */

void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			d = c / 10;
			e = c % 10;

			if (b == 0)
			{
				_putchar('0');
			}
			else if (c < 10)
			{
				_putchar(e + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(d + '0');
				_putchar(e + '0');
			}
		}
		_putchar('\n');
	}
}
