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
	int a, b, c = 0, d = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			c++;
		c++;
	}
	arr = malloc(sizeof(char) * (c + 1));
	if (arr == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		b = 0;
		while (av[a][b])
		{
			arr[d] = av[a][b];
			b++;
			d++;
		}
		arr[d] = '\n';
		d++;
	}
	arr[d] = '\n';
	return (arr);
}
