#include "main.h"

/**
 * set_string - set value of a pointer to char
 * @s: pointer of a pointer
 * @to: pointee
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
