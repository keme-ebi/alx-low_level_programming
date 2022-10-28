#include "main.h"

/**
 * len - returns the length of a string
 * @s: string
 * Return: string length
 */
int len(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;
	return (i);
}

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: a string of 0 and 1 chars
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 1;
	unsigned int j = 0;
	unsigned int strlen;
	int k;

	strlen = len(b);

	for (k = strlen - 1; k >= 0; k--)
	{
		if (b[k] != '1' && b[k] != '0')
			return (0);
		if (b[k] == '1')
			j += i;
		i *= 2;
	}
	return (j);
}
