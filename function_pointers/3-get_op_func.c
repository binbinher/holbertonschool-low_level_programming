#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - function that selects the correct function
 * @s: the operator passed as argument to the program.
 * Return: pointer to the function to use.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}};
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
