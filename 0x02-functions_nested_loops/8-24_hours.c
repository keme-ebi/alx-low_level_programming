#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		if (a == 2)
		{
			for (b = 0; b <= 3; b++)
			{
				for (c = 0; c <= 5; c++)
				{
					for(d = 0; d <= 9; d++)
					{
						if (a <= 2)
						{
							_putchar((a % 10) + '0');
							_putchar((b % 10) + '0');
							_putchar(':');
							_putchar((c % 10) + '0');
							_putchar((d % 10) + '0');
							_putchar('\n');
						if (a == 2 && b < 4 && c == 5 && d == 9)
						{
							break;
						}
						}
					}
				}
			}
		}
		if (a < 2)
			for (b = 0; b <= 9; b++)
	}
}
