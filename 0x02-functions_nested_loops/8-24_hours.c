#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			if (a <= 23)
			{
				_putchar((a % 10) + '0');
				_putchar(':');
				_putchar((b % 10) + '0');
				_putchar('\n');
			if (a == 23 && b == 59)
			{
				break;
			}
			}
		}
	}
}
