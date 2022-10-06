#include "main.h"
#include <stdlib.h>

/**
 * slen - returns the length of a string
 * @s: char
 * Return: string length
 */

int slen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;
	return (len);
}

/**
 * string_nconcat - concatenats two strings
 * @s1: string
 * @s2: string
 * @n: bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, comb_len, a;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = slen(s1);
	s2_len = slen(s2);
	comb_len = s1_len + s2_len + 1;


	str = malloc(sizeof(char) * comb_len);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < s1_len; a++)
		str[a] = s1[a];
	if (n >= s2_len)
		str[s1_len + a] = s2_len;
	for (a = 0; a < n && s2[a] != '\0'; a++)
		str[s1_len + a] = s2[a];
	str[comb_len - 1] = '\0';
	return (str);
}
