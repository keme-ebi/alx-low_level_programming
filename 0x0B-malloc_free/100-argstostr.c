#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments in the program
 * @ac: number of argument
 * @av: arguments
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *arr;
	int n;

	if (ac == 0 || av == NULL)
		return (NULL);
	arr = malloc(sizeof(av) * ac);
	if (arr == NULL)
		return (NULL);
	for (n = 0; n < ac; n++)
		_putchar(arr[n]'\n');
	return (arr);
}
