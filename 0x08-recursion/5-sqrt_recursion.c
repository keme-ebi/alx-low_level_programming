#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural sqrt
 */

/* square function */
int square(int i, int j);

int _sqrt_recursion(int n)
{
	return (square(i, 1));
}

/**
 * square - find square root
 * @i: number
 * @j: sqrt
 * Return: int
 */

int square(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	else
		return (square(i, j + 1));
}
