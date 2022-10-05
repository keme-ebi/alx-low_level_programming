#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0, len, a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	len = s1[i] + s2[j] + 1;

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	for (a = 0; a < s1[i]; a++)
		str[a] = s1[i + a];
	for (a = 0; a < s2[j]; a++)
		*(str + (s1[i + a])) = s2[j + a];
	str[len - 1] = '\0';
	return (str);
}
