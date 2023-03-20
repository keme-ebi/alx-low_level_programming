#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: char
 * @src: char
 * @n: integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0, s;

	while (*(dest + d) != '\0')
		d++;

	for (s = 0; s < n && *(src + s) != '\0'; s++)
	{
		*(dest + d) = *(src + s);
		d++;
	}
	return (dest);
}
