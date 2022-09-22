#include "main.h"

/**
 * string_toupper - changese all lowercase letters to uppercase
 * @str: char
 * Return: void
 */

void *string_toupper(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (str[len] >= 97 && str[len] <= 122)
			str[len] = str[len] - 32;
	}
	return (str);
}
