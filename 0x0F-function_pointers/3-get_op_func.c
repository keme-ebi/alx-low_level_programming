#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perfrom the operation
 * @s: operator passed as argument
 * Return: pointer to the functin that corressponds to the operator given as argument
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL }
	};
	int i = 0;

	while (i < 10)
	{
		if (s[o] == ops->op[i])
			break;
		i++;
	}
	return (ops[i / 2].f);
}
