#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 *	and then in uppercase
 * Return: always 0.
 */

int main(void)
{
	char alphabets, alphabetsC;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
		putchar('\n');
	}
	for (alphabetsC = 'A'; alphabetsC <= 'Z'; alphabetsC++)
	{
		putchar(alphabets);
		putchar('\n');
	}
	return (0);
}
