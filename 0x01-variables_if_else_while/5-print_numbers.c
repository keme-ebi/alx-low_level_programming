#include <stdio.h>

/**
 * main - prints all single digits of base 10
 *	starting from 0.
 * Return: always 0.
 */

int main(void)
{
	int nums;

	for (nums = 0; nums <= 10; nums++)
		printf("%d", nums);
	printf('\n');
	return (0);
}
