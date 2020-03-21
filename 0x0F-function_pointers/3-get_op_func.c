#include "3-calc.h"
#include <string.h>
/**
  * get_op_func - selects the correct function to perform the operatio
  * nasked by the user.
  * @s: char.
  * Return: NULL or fuction.
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int idx;

	idx = 0;
	while (ops[idx].op)
	{
		if (!strcmp(s, ops[idx].op))
			return (ops[idx].f);
		idx++;
	}
	return (NULL);
}
