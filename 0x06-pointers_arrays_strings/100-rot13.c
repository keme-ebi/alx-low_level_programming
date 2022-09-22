#include "main.h"

/**
 * rot13 - encodes a string
 * @str: char
 * Return: str
 */

char *rot13(char *str)
{
	int len, i;
	char ltrs[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (len = 0; str[len] != '\0'; len++)
	{
		for (i = 0; i < 52; i++)
		{
			if (str[len] == ltrs[i])
			{
				str[len] = rot[i];
				break;
			}
		}
	}
	return (str);
}
