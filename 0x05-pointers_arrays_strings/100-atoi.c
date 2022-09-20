#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: char
 * Return: int
 */

int _atoi(char *s)
{
	unsigned int a, b = 0, c = 0, d = 1, e = 1, f;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		if (b > 0 && (*(s + a) < '0' || *(s + a) > '9'))
			break;
		if (*(s + a) == '-')
			d *= -1;
		if ((*(s + a) >= '0') && (*(s + a) <= '9'))
		{
			if (b > 0)
				e *= 10;
			b++;
		}
	}
	for (f = a - b; f < a; f++)
	{
		c = c + ((*(s + a) + '0') * e);
		e /= 10;
	}
	return (c * d);
}
