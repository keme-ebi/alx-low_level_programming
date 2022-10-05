#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: char
 * Return: string length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;
	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int s1_len, s2_len, comb_len, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	comb_len = s1_len + s2_len + 1;

	str = malloc(sizeof(char) * comb_len);
	if (str == NULL)
		return (NULL);

	for (a = 0; a < s1_len; a++)
		str[a] = s1[a];
	for (a = 0; a < s2_len; a++)
		str[s1_len + a] = s2[a];
	str[comb_len - 1] = '\0';
	return (str);
}
