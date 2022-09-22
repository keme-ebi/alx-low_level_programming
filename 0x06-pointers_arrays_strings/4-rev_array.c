#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + (i - 1));
		*(a + (i - 1)) = temp;
	}
}
