#include <stdio.h>

/**
 * main - lists all natural numbers below 10
 *	that are multiples of 3 or 5.
 * Return: always 0.
 */

int main(void)
{
	int num, mult;

	for (num = 1; num < 1024; num++)
	{
		if (((num % 3) == 0) || ((num % 5) == 0))
			mult = mult + num;
	}
	printf("%d\n", mult);
	return(0);
}
