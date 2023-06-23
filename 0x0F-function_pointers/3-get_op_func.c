/*
 * Author: Gabula Pius <github.com/devpius>
 * Email: mcduell24@gmail.com
 * Date: Fri, 23   2023
 */

#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - points to the array of operations
 * @s: symbol of operation
 *
 * Return: (0) success
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}

	return (0);
}
