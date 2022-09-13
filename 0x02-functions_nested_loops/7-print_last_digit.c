#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int ldigit = n % 10;

	_putchar(ldigit + '0');
	return (ldigit);
}
