#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers
 * Return: always 0.
 */

int main(void)
{
	long int n1, n2, n3, n4, n5, n6, c;

	n1 = 1;
	n2 = 2;
	printf("%ld", n1);
	for (c = 1; c < 91; c++)
	{
		printf(", %ld", n2);
		n2 = n2 + n1;
		n1 = n2 - n1;
	}
	n3 = n1 / 1000000000;
	n4 = n1 % 1000000000;
	n5 = n2 / 1000000000;
	n6 = n2 % 1000000000;
	for (c = 92; c < 99; c++)
	{
		printf(", %ld", n5 + (n6 / 1000000000));
		printf("%ld", n6 % 1000000000);
		n5 = n5 + n3;
		n3 = n5 - n3;
		n6 = n6 + n4;
		n4 = n6 - n4;
	}
	printf("\n");
	return (0);
}

