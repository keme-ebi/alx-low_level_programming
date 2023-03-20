#include "calc.h"
#include <stdio.h>

/**
 * add - adds two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: sum of integer
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtract an integer from another
 * @a: 1st integer
 * @b: 2nd integer
 * Return: answer
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: multiplied answer
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: answer from division
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - performs modulus operation on two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: mod
 */
int mod(int a, int b)
{
	return (a % b);
}
