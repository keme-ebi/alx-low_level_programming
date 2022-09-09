#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 *	and then in uppercase
 * Return: always 0.
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'aA'; alphabets <= 'zZ'; alphabets++)
	{
		putchar(alphabets);
		putchar('\n');
	}
	return (0);
}
