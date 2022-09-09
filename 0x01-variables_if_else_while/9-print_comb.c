#include <stdio.h>

/**
 * main - prints all possible combinations of single-digits
 *	separated by , and followe by a space
 * Return: always 0.
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num", ");
	putchar('\n');
	return (0);
}
