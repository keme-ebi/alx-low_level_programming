#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int a, b, c, d, e;

	e = 58;

	for (a = '0'; a <= '2'; a++)
	{
		if (a == '2')
		{
			e = '4';
		}
		for (b = '0'; b < e; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d < 58; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
				}
			}
		}
}
