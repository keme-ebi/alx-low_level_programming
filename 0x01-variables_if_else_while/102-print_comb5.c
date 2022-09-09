#include <stdio.h>

/**
 * main - prints all possible cominations of two
 *	two-digit numbers separated by a space
 * Return: always 0.
 */

int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; c++)
				{
					if (((a + b) < (c + d) && a <= c) || c > a)
					{
						putchar((a % 10) + '0');
						putchar((b % 10) + '0');
						putchar(' ');
						putchar((c % 10) + '0');
						putchar((d % 10) + '0');
					if (a + b + c + d == 227 && a == 57)
					{
						break;
					}
					else
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
