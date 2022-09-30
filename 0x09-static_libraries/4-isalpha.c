#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: a parameter
 * Return: 1 if true
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
