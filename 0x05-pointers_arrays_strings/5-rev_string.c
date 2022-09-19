#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char
 * Return: void
 */

void rev_string(char *s)
{
	char *start, *end, tmp;
	int len = 0, c;

	while (*(s + len) != '\0')
		len++;
	start = s;
	end = s;

	for (c = 0; c < *(s + len) - 1; c++)
		end++;
	for (c = 0; c < *(s + len) / 2; c++)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;
		start++;
		end--;
	}
}
