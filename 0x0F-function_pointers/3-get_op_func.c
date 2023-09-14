#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (*s == *ops[i].op)
			break;
		i++;
	}
	if (i == 6)
	{
		printf("Error\n");
		exit(99);
	}
	return (ops[i].f);
}
