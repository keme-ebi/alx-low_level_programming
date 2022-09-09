#include <stdio.h>

/**
 * main - prints all alphabets in lowercase in reverse
 * Return: always 0.
 */

int main(void)
{
	char tebahpla;

	for (tebahpla = 'z'; tebahpla >= 'a'; tebahpla--)
		putchar(tebahpla);
	putchar('\n');
	return (0);
}
