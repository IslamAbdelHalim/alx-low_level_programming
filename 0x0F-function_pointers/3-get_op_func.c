#include "3-calc.h"

/**
 * get_op_func - function to get the operator
 *
 * @s: The operator
 *
 * Return: the result of operation
*/

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		/*!s[1] => That mean if There a second operator will return NULL*/
		if (s && ops[i].op[0] == s[0] && !s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
