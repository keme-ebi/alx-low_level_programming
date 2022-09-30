#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character to stdout
 * @c: character
 * Return: 1 if success
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
