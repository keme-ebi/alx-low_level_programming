#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 *	except q and e.
 * Return: always 0.
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'q' && alphabets != 'e')
			putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
