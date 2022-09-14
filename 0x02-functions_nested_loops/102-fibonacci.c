#include <stdio.h>

/**
 * main - prints the first 50 fibonacci sequence
 * Return: always 0.
 */

int main(void)
{
	int n1, n2, fs, c;

	n1 = 1;
	n2 = 2;

	for (c = 1; c <= 50; c++)
	{
		fs = n1 + n2;
		n1 = n2;
		n2 = fs;
		printf("%d\n", fs);
	}
	return (0);
}
