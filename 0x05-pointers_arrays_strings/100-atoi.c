#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: char
 * Return: int
 */

int _atoi(char *s)
{
	int a = 0, b = 0, c = 0, d = 1, e = 1, f;

	while  (*(s + a) != '\0')
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
		a++;
	}
	for (f = b; f < a; f++)
	{
		c += ((*(s + a) + '0') * e);
		e /= 10;
	}
	return (c);
}
