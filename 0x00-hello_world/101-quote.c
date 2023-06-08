#include <unistd.h>
#include <stdio.h>

/**
 * main - Prints "and that piece of art is useful" -Dora Korpar, 2015-10-19",
 *		followed by a new line, to standard error.
 * Return: always 1.
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19\n";
	
	write(2, str, sizeof(str) - 1);
	return (1);
}
