#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer
 * @b: integer
 * Retun: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
