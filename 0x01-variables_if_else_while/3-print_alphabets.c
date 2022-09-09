#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 *	and then in uppercase
 * Return: always 0.
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
		putchar(alphabets);
	putchar('\n');
	return (0);
}
