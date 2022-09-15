#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14, 10 times
 * Return: void
 */

void more_numbers(void)
{
	int num, i;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
