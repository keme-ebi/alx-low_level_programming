#include <stdio.h>

/**
 * main - prints the first 50 fibonacci sequence
 * Return: always 0.
 */

int main(void)
{
	long int n1, n2, fs, c;

	n1 = 1;
	n2 = 2;

	for (c = 1; c <= 50; c++)
	{
		if (n1 != 20365011074)
		{
			printf("%ld, ", n1);
		}
		else
		{
			printf("%ld\n", n1);
		}
		fs = n1 + n2;
		n1 = n2;
		n2 = fs;
	}
	return (0);
}
