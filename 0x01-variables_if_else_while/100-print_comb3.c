#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 *	separated by , and follwed by a space
 * Return: always 0.
 */

int main(void)
{
	int num;

	for (num = 01; num <= 89; num++)
	{
		putchar((num % 10) + 0);
		if (num != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
