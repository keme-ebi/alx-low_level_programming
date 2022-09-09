#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * Return: always 0.
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	putchar('\n');
	return (0);
}
