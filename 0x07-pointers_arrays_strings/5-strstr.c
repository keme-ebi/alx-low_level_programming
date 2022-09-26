#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search for substring
 * @needle: substring to search for
 * Return: pointer to substring beginning, null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (*haystack != '\0')
	{
		i = haystack;
		j = needle;
		while (*haystack != '\0' && *j != '\0' && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
			return (i);
		haystack = i + 1;
	}
	return (NULL);
}
