#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: char
 * Return: str
 */

char *leet(char *str)
{
	int len, i;
	int sl[] = {97, 101, 111, 116, 108};
	int cl[] = {65, 69, 79, 84, 76};
	int rn[] = {52, 51, 48, 55, 49};

	for (len = 0; str[len] != '\0'; len++)
	{
		for (i = 0; i < 5; i++)
		{
			if (str[len] == sl[i] || str[len] == cl[i])
			{
				str[len] = rn[i];
				break;
			}
		}
	}
	return (str);
}
