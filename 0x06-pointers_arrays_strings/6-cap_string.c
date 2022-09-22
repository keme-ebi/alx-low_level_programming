#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: char
 * Retur: str
 */

char *cap_string(char *str)
{
	int len = 0, i;
	int special_char = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (str[len] >= 97 && str[len] <= 122)
		str[len] = str[len] - 32;
	len++;
	while (str[len] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (str[len] == special_char[i])
			{
				if ((str[len] + 1) >= 97 && (str[len] + 1) <= 122)
					(str[len] + 1) = (str[len] + 1) - 32;
				break;
			}
		}
		len++;
	}
	return (str);
}
