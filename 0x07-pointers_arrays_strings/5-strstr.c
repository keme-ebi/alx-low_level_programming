#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search for substring
 * @needle: substring to search for
 * Return: pointer to substring beginning, null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + (i + j)) != *(needle + j))
				break;
		}
		if (!*(needle + j))
			return (&haystack[j]);
	}
	return ('\0');
}
