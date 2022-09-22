#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: char
 * @src: char
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int d = 0, s;

	while (*(dest + d) != '\0')
		d++;
	for (s = 0; *(src + s) != '\0'; s++)
	{
		*(dest + d) = *(src + s);
		d++;
	}
	return (dest);
}
