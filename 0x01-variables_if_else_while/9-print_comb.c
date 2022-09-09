#include <stdio.h>

/**
 * main - prints all possible combinations of single-digits
 *	separated by , and followe by a space
 * Return: always 0.
 */

int main(void)
{
	int num;
	char sc = ", ";

	for (num = 0; num <= 9; num++)
		putchar(num, sc);
	putchar('\n');
	return (0);
}
