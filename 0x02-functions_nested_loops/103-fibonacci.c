#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * Return: always 0.
 */

int main(void)
{
	long int n1, n2, fs, f;

	n1 = 1;
	n2 = 2;
	fs = f = 0;

	for (fs = 0; fs <= 4000000; fs++)
	{
		fs = n1 + n2;
		n1 = n2;
		n2 = fs;
		if ((n1 % 2) == 0)
			f = f + n1;
	}
	printf("%ld\n", f);
	return (0);
}
