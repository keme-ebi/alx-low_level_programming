#include <stdio.h>

/**
 * main - prints all possible cominations of two
 *	two-digit numbers separated by a space
 * Return: always 0.
 */

int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 0; d <= 9; c++)
				{
					if (((a + b) < (c + d) && a <= c) || c > a)
					{
						putchar((a % 10) + '0');
						putchar((b % 10) + '0');
						putchar(' ');
						putchar((c % 10) + '0');
						putchar((d % 10) + '0');
					if (a + b + c + d == 35 && a == 9)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
