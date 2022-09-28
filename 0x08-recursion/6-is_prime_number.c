#include "main.h"

/**
 * prime - check for prime number
 * @n: number
 * @d: divisor
 * Return: 1 if prime number, 0 if not
 */

int prime(int n, int d)
{
	if (n == d)
		return (1);
	else if (n % d == 0)
		return (0);
	else
		return (prime(n, d + 1));
}

/**
 * is_prime_number - returns 1 if input is a prime number
 * @n: number/input
 * Return: 1 if prime number, 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	else if (n == 1)
		return (0);
	else
		return (prime(n, 2));
}
