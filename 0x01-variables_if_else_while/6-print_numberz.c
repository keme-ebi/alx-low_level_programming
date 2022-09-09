#include <stdio.h>

/**
 * main - prints all single numbers of base 10
 *	starting from 0. using putchar function
 * Return: always 0.
 */

int main(void)
{
	int numz;

	for (numz = 0; numz <= 9; numz++)
		putchar((numz % 10) + '0');
	putchar('\n');
	return (0);
}
