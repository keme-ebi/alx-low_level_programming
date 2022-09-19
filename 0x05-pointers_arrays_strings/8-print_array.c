#include "main.h"
#include <stdio.h>

/**
 * print_array - prints element of an array of integers
 * @a: integer
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d, ", *(a + i));
	printf("\n");
}
