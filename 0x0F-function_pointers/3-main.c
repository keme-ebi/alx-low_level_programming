#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 * @argc: number of command line arguments
 * @argv: arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a1, a2, rs;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	rs = func(a1, a2);

	printf("%d\n", rs);
	return (0);
}
